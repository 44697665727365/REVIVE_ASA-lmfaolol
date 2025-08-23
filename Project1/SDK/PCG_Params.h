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
	 * Function PCG.PCGAttributePropertySelectorBlueprintHelpers.SetPointProperty
	 */
	struct UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Params
	{
	public:
		struct FPCGAttributePropertySelector                       Selector;                                                // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EPCGPointProperties                                        InPointProperty;                                         // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGAttributePropertySelectorBlueprintHelpers.SetAttributeName
	 */
	struct UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Params
	{
	public:
		struct FPCGAttributePropertySelector                       Selector;                                                // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                InAttributeName;                                         // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGAttributePropertySelectorBlueprintHelpers.GetName
	 */
	struct UPCGAttributePropertySelectorBlueprintHelpers_GetName_Params
	{
	public:
		struct FPCGAttributePropertySelector                       Selector;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.UnionWith
	 */
	struct UPCGSpatialData_UnionWith_Params
	{
	public:
		class UPCGSpatialData*                                     InOther;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGUnionData*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.ToPointDataWithContext
	 */
	struct UPCGSpatialData_ToPointDataWithContext_Params
	{
	public:
		struct FPCGContext                                         Context;                                                 // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       ReturnValue;                                             // 0x0098(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.ToPointData
	 */
	struct UPCGSpatialData_ToPointData_Params
	{
	public:
		class UPCGPointData*                                       ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.Subtract
	 */
	struct UPCGSpatialData_Subtract_Params
	{
	public:
		class UPCGSpatialData*                                     InOther;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGDifferenceData*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.SamplePoint
	 */
	struct UPCGSpatialData_SamplePoint_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBox                                                Bounds;                                                  // 0x0060(0x0038)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ICXE[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPCGPoint                                           OutPoint;                                                // 0x00A0(0x00D0)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        OutMetadata;                                             // 0x0170(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0178(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.ProjectPoint
	 */
	struct UPCGSpatialData_ProjectPoint_Params
	{
	public:
		struct FTransform                                          InTransform;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBox                                                InBounds;                                                // 0x0060(0x0038)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPCGProjectionParams                                InParams;                                                // 0x0098(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D8YZ[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPCGPoint                                           OutPoint;                                                // 0x00C0(0x00D0)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        OutMetadata;                                             // 0x0190(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0198(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.ProjectOn
	 */
	struct UPCGSpatialData_ProjectOn_Params
	{
	public:
		class UPCGSpatialData*                                     InOther;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPCGProjectionParams                                InParams;                                                // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGSpatialData*                                     ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.MutableMetadata
	 */
	struct UPCGSpatialData_MutableMetadata_Params
	{
	public:
		class UPCGMetadata*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.IntersectWith
	 */
	struct UPCGSpatialData_IntersectWith_Params
	{
	public:
		class UPCGSpatialData*                                     InOther;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGIntersectionData*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.InitializeFromData
	 */
	struct UPCGSpatialData_InitializeFromData_Params
	{
	public:
		class UPCGSpatialData*                                     InSource;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        InMetadataParentOverride;                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInheritMetadata;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInheritAttributes;                                      // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.HasNonTrivialTransform
	 */
	struct UPCGSpatialData_HasNonTrivialTransform_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.GetStrictBounds
	 */
	struct UPCGSpatialData_GetStrictBounds_Params
	{
	public:
		struct FBox                                                ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.GetNormal
	 */
	struct UPCGSpatialData_GetNormal_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.GetDimension
	 */
	struct UPCGSpatialData_GetDimension_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.GetDensityAtPosition
	 */
	struct UPCGSpatialData_GetDensityAtPosition_Params
	{
	public:
		struct FVector                                             InPosition;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.GetBounds
	 */
	struct UPCGSpatialData_GetBounds_Params
	{
	public:
		struct FBox                                                ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.CreateEmptyMetadata
	 */
	struct UPCGSpatialData_CreateEmptyMetadata_Params
	{
	public:
		class UPCGMetadata*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGSpatialData.ConstMetadata
	 */
	struct UPCGSpatialData_ConstMetadata_Params
	{
	public:
		class UPCGMetadata*                                        ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGDifferenceData.SetDensityFunction
	 */
	struct UPCGDifferenceData_SetDensityFunction_Params
	{
	public:
		EPCGDifferenceDensityFunction                              InDensityFunction;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGDifferenceData.Initialize
	 */
	struct UPCGDifferenceData_Initialize_Params
	{
	public:
		class UPCGSpatialData*                                     InData;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGDifferenceData.AddDifference
	 */
	struct UPCGDifferenceData_AddDifference_Params
	{
	public:
		class UPCGSpatialData*                                     InDifference;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGIntersectionData.Initialize
	 */
	struct UPCGIntersectionData_Initialize_Params
	{
	public:
		class UPCGSpatialData*                                     InA;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGSpatialData*                                     InB;                                                     // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGPointData.SetPoints
	 */
	struct UPCGPointData_SetPoints_Params
	{
	public:
		TArray<struct FPCGPoint>                                   InPoints;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGPointData.GetPoints
	 */
	struct UPCGPointData_GetPoints_Params
	{
	public:
		TArray<struct FPCGPoint>                                   ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGPointData.GetPoint
	 */
	struct UPCGPointData_GetPoint_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4BOQ[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPCGPoint                                           ReturnValue;                                             // 0x0010(0x00D0)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGPointData.CopyPointsFrom
	 */
	struct UPCGPointData_CopyPointsFrom_Params
	{
	public:
		class UPCGPointData*                                       InData;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            InDataIndices;                                           // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGRenderTargetData.Initialize
	 */
	struct UPCGRenderTargetData_Initialize_Params
	{
	public:
		class UTextureRenderTarget2D*                              InRenderTarget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6W4C[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGTextureData.Initialize
	 */
	struct UPCGTextureData_Initialize_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W0F3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGUnionData.Initialize
	 */
	struct UPCGUnionData_Initialize_Params
	{
	public:
		class UPCGSpatialData*                                     InA;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGSpatialData*                                     InB;                                                     // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGUnionData.AddData
	 */
	struct UPCGUnionData_AddData_Params
	{
	public:
		class UPCGSpatialData*                                     InData;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.VariableLoopBody
	 */
	struct UPCGBlueprintElement_VariableLoopBody_Params
	{
	public:
		struct FPCGContext                                         InContext;                                               // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       InData;                                                  // 0x0098(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPCGPoint                                           InPoint;                                                 // 0x00A0(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        OutMetadata;                                             // 0x0170(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPCGPoint>                                   ReturnValue;                                             // 0x0178(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.VariableLoop
	 */
	struct UPCGBlueprintElement_VariableLoop_Params
	{
	public:
		struct FPCGContext                                         InContext;                                               // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       InData;                                                  // 0x0098(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       OutData;                                                 // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       OptionalOutData;                                         // 0x00A8(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.PointLoopBody
	 */
	struct UPCGBlueprintElement_PointLoopBody_Params
	{
	public:
		struct FPCGContext                                         InContext;                                               // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       InData;                                                  // 0x0098(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPCGPoint                                           InPoint;                                                 // 0x00A0(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FPCGPoint                                           OutPoint;                                                // 0x0170(0x00D0)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        OutMetadata;                                             // 0x0240(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0248(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.PointLoop
	 */
	struct UPCGBlueprintElement_PointLoop_Params
	{
	public:
		struct FPCGContext                                         InContext;                                               // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       InData;                                                  // 0x0098(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       OutData;                                                 // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       OptionalOutData;                                         // 0x00A8(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.OutputLabels
	 */
	struct UPCGBlueprintElement_OutputLabels_Params
	{	};

	/**
	 * Function PCG.PCGBlueprintElement.NodeTypeOverride
	 */
	struct UPCGBlueprintElement_NodeTypeOverride_Params
	{
	public:
		EPCGSettingsType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.NodeTitleOverride
	 */
	struct UPCGBlueprintElement_NodeTitleOverride_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.NodeColorOverride
	 */
	struct UPCGBlueprintElement_NodeColorOverride_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.NestedLoopBody
	 */
	struct UPCGBlueprintElement_NestedLoopBody_Params
	{
	public:
		struct FPCGContext                                         InContext;                                               // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       InOuterData;                                             // 0x0098(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       InInnerData;                                             // 0x00A0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ABUQ[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPCGPoint                                           InOuterPoint;                                            // 0x00B0(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FPCGPoint                                           InInnerPoint;                                            // 0x0180(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FPCGPoint                                           OutPoint;                                                // 0x0250(0x00D0)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        OutMetadata;                                             // 0x0320(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0328(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.NestedLoop
	 */
	struct UPCGBlueprintElement_NestedLoop_Params
	{
	public:
		struct FPCGContext                                         InContext;                                               // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       InOuterData;                                             // 0x0098(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       InInnerData;                                             // 0x00A0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       OutData;                                                 // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       OptionalOutData;                                         // 0x00B0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.IterationLoopBody
	 */
	struct UPCGBlueprintElement_IterationLoopBody_Params
	{
	public:
		struct FPCGContext                                         InContext;                                               // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int64_t                                                    Iteration;                                               // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGSpatialData*                                     InA;                                                     // 0x00A0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGSpatialData*                                     InB;                                                     // 0x00A8(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPCGPoint                                           OutPoint;                                                // 0x00B0(0x00D0)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        OutMetadata;                                             // 0x0180(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0188(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.IterationLoop
	 */
	struct UPCGBlueprintElement_IterationLoop_Params
	{
	public:
		struct FPCGContext                                         InContext;                                               // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int64_t                                                    NumIterations;                                           // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       OutData;                                                 // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGSpatialData*                                     OptionalA;                                               // 0x00A8(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGSpatialData*                                     OptionalB;                                               // 0x00B0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       OptionalOutData;                                         // 0x00B8(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.InputLabels
	 */
	struct UPCGBlueprintElement_InputLabels_Params
	{	};

	/**
	 * Function PCG.PCGBlueprintElement.GetSeed
	 */
	struct UPCGBlueprintElement_GetSeed_Params
	{
	public:
		struct FPCGContext                                         InContext;                                               // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0098(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.GetRandomStream
	 */
	struct UPCGBlueprintElement_GetRandomStream_Params
	{
	public:
		struct FPCGContext                                         InContext;                                               // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FRandomStream                                       ReturnValue;                                             // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.ExecuteWithContext
	 */
	struct UPCGBlueprintElement_ExecuteWithContext_Params
	{
	public:
		struct FPCGContext                                         InContext;                                               // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPCGDataCollection                                  Input;                                                   // 0x0098(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPCGDataCollection                                  Output;                                                  // 0x00B8(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintElement.Execute
	 */
	struct UPCGBlueprintElement_Execute_Params
	{
	public:
		struct FPCGDataCollection                                  Input;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPCGDataCollection                                  Output;                                                  // 0x0020(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintSettings.SetElementType
	 */
	struct UPCGBlueprintSettings_SetElementType_Params
	{
	public:
		class UClass*                                              InElementType;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGBlueprintElement*                                ElementInstance;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintSettings.GetElementType
	 */
	struct UPCGBlueprintSettings_GetElementType_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGPointMatchAndSetSettings.SetMatchAndSetType
	 */
	struct UPCGPointMatchAndSetSettings_SetMatchAndSetType_Params
	{
	public:
		class UClass*                                              InMatchAndSetType;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGNode.RemoveEdgeTo
	 */
	struct UPCGNode_RemoveEdgeTo_Params
	{
	public:
		class FName                                                FromPinLable;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGNode*                                            To;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ToPinLabel;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGNode.GetSettings
	 */
	struct UPCGNode_GetSettings_Params
	{
	public:
		class UPCGSettings*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGNode.GetGraph
	 */
	struct UPCGNode_GetGraph_Params
	{
	public:
		class UPCGGraph*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGNode.AddEdgeTo
	 */
	struct UPCGNode_AddEdgeTo_Params
	{
	public:
		class FName                                                FromPinLabel;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGNode*                                            To;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ToPinLabel;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGNode*                                            ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGStaticMeshSpawnerSettings.SetMeshSelectorType
	 */
	struct UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Params
	{
	public:
		class UClass*                                              InMeshSelectorType;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGStaticMeshSpawnerSettings.SetInstancePackerType
	 */
	struct UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Params
	{
	public:
		class UClass*                                              InInstancePackerType;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGPartitionActor.GetOriginalComponent
	 */
	struct APCGPartitionActor_GetOriginalComponent_Params
	{
	public:
		class UPCGComponent*                                       LocalComponent;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGComponent*                                       ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGPartitionActor.GetLocalComponent
	 */
	struct APCGPartitionActor_GetLocalComponent_Params
	{
	public:
		class UPCGComponent*                                       OriginalComponent;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGComponent*                                       ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.SetSeedFromPosition
	 */
	struct UPCGBlueprintHelpers_SetSeedFromPosition_Params
	{
	public:
		struct FPCGPoint                                           InPoint;                                                 // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.SetLocalCenter
	 */
	struct UPCGBlueprintHelpers_SetLocalCenter_Params
	{
	public:
		struct FPCGPoint                                           InPoint;                                                 // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             InLocalCenter;                                           // 0x00D0(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.SetExtents
	 */
	struct UPCGBlueprintHelpers_SetExtents_Params
	{
	public:
		struct FPCGPoint                                           InPoint;                                                 // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             InExtents;                                               // 0x00D0(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetTransformedBounds
	 */
	struct UPCGBlueprintHelpers_GetTransformedBounds_Params
	{
	public:
		struct FPCGPoint                                           InPoint;                                                 // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FBox                                                ReturnValue;                                             // 0x00D0(0x0038)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetTaskId
	 */
	struct UPCGBlueprintHelpers_GetTaskId_Params
	{
	public:
		struct FPCGContext                                         Context;                                                 // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetSettings
	 */
	struct UPCGBlueprintHelpers_GetSettings_Params
	{
	public:
		struct FPCGContext                                         Context;                                                 // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGSettings*                                        ReturnValue;                                             // 0x0098(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetRandomStream
	 */
	struct UPCGBlueprintHelpers_GetRandomStream_Params
	{
	public:
		struct FPCGPoint                                           InPoint;                                                 // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGSettings*                                        OptionalSettings;                                        // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGComponent*                                       OptionalComponent;                                       // 0x00D8(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRandomStream                                       ReturnValue;                                             // 0x00E0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetOriginalComponent
	 */
	struct UPCGBlueprintHelpers_GetOriginalComponent_Params
	{
	public:
		struct FPCGContext                                         Context;                                                 // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGComponent*                                       ReturnValue;                                             // 0x0098(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetLocalCenter
	 */
	struct UPCGBlueprintHelpers_GetLocalCenter_Params
	{
	public:
		struct FPCGPoint                                           InPoint;                                                 // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x00D0(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetInterpolatedPCGLandscapeLayerWeights
	 */
	struct UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPCGLandscapeLayerWeight>                    ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetInputData
	 */
	struct UPCGBlueprintHelpers_GetInputData_Params
	{
	public:
		struct FPCGContext                                         Context;                                                 // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGData*                                            ReturnValue;                                             // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetExtents
	 */
	struct UPCGBlueprintHelpers_GetExtents_Params
	{
	public:
		struct FPCGPoint                                           InPoint;                                                 // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x00D0(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetComponent
	 */
	struct UPCGBlueprintHelpers_GetComponent_Params
	{
	public:
		struct FPCGContext                                         Context;                                                 // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGComponent*                                       ReturnValue;                                             // 0x0098(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetActorLocalBoundsPCG
	 */
	struct UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnorePCGCreatedComponents;                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E24W[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBox                                                ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetActorData
	 */
	struct UPCGBlueprintHelpers_GetActorData_Params
	{
	public:
		struct FPCGContext                                         Context;                                                 // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGData*                                            ReturnValue;                                             // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.GetActorBoundsPCG
	 */
	struct UPCGBlueprintHelpers_GetActorBoundsPCG_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnorePCGCreatedComponents;                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L79U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBox                                                ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.CreatePCGDataFromActor
	 */
	struct UPCGBlueprintHelpers_CreatePCGDataFromActor_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bParseActor;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PB7L[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPCGData*                                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGBlueprintHelpers.ComputeSeedFromPosition
	 */
	struct UPCGBlueprintHelpers_ComputeSeedFromPosition_Params
	{
	public:
		struct FVector                                             InPosition;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGInstancePackerBase.PackInstances
	 */
	struct UPCGInstancePackerBase_PackInstances_Params
	{
	public:
		struct FPCGContext                                         Context;                                                 // 0x0000(0x0098)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class UPCGSpatialData*                                     InSpatialData;                                           // 0x0098(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPCGMeshInstanceList                                InstanceList;                                            // 0x00A0(0x01F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPCGPackedCustomData                                OutPackedCustomData;                                     // 0x0290(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGInstancePackerBase.PackCustomDataFromAttributes
	 */
	struct UPCGInstancePackerBase_PackCustomDataFromAttributes_Params
	{
	public:
		struct FPCGMeshInstanceList                                InstanceList;                                            // 0x0000(0x01F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x01F0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        AttributeNames;                                          // 0x01F8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPCGPackedCustomData                                OutPackedCustomData;                                     // 0x0208(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGInstancePackerBase.AddTypeToPacking
	 */
	struct UPCGInstancePackerBase_AddTypeToPacking_Params
	{
	public:
		int32_t                                                    TypeId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UBTN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPCGPackedCustomData                                OutPackedCustomData;                                     // 0x0008(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMatchAndSetBase.ValidatePreconditions
	 */
	struct UPCGMatchAndSetBase_ValidatePreconditions_Params
	{
	public:
		class UPCGPointData*                                       InPointData;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMatchAndSetBase.MatchAndSet
	 */
	struct UPCGMatchAndSetBase_MatchAndSet_Params
	{
	public:
		struct FPCGContext                                         Context;                                                 // 0x0000(0x0098)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UPCGPointMatchAndSetSettings*                        InSettings;                                              // 0x0098(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       InPointData;                                             // 0x00A0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGPointData*                                       OutPointData;                                            // 0x00A8(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.SetPointAttributes
	 */
	struct UPCGMetadata_SetPointAttributes_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I9A2[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPCGPoint                                           OutPoint;                                                // 0x00E0(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.SetAttributesByKey
	 */
	struct UPCGMetadata_SetAttributesByKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        InMetaData;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    TargetKey;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    OutKey;                                                  // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.ResetWeightedAttributesByKey
	 */
	struct UPCGMetadata_ResetWeightedAttributesByKey_Params
	{
	public:
		int64_t                                                    TargetKey;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    OutKey;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.ResetPointWeightedAttributes
	 */
	struct UPCGMetadata_ResetPointWeightedAttributes_Params
	{
	public:
		struct FPCGPoint                                           OutPoint;                                                // 0x0000(0x00D0)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.RenameAttribute
	 */
	struct UPCGMetadata_RenameAttribute_Params
	{
	public:
		class FName                                                AttributeToRename;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewAttributeName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.MergePointAttributes
	 */
	struct UPCGMetadata_MergePointAttributes_Params
	{
	public:
		struct FPCGPoint                                           PointA;                                                  // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetadataA;                                               // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9JDL[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPCGPoint                                           PointB;                                                  // 0x00E0(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetadataB;                                               // 0x01B0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3JH9[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPCGPoint                                           TargetPoint;                                             // 0x01C0(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EPCGMetadataOp                                             Op;                                                      // 0x0290(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.MergeAttributesByKey
	 */
	struct UPCGMetadata_MergeAttributesByKey_Params
	{
	public:
		int64_t                                                    KeyA;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetadataA;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    KeyB;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetadataB;                                               // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    TargetKey;                                               // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPCGMetadataOp                                             Op;                                                      // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T2JO[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int64_t                                                    OutKey;                                                  // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.InitializeWithAttributeFilter
	 */
	struct UPCGMetadata_InitializeWithAttributeFilter_Params
	{
	public:
		class UPCGMetadata*                                        InParent;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4N4S[0x50];                                  // 0x0008(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EPCGMetadataFilterMode                                     InFilterMode;                                            // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.InitializeAsCopyWithAttributeFilter
	 */
	struct UPCGMetadata_InitializeAsCopyWithAttributeFilter_Params
	{
	public:
		class UPCGMetadata*                                        InMetadataToCopy;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8ZB1[0x50];                                  // 0x0008(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EPCGMetadataFilterMode                                     InFilterMode;                                            // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.InitializeAsCopy
	 */
	struct UPCGMetadata_InitializeAsCopy_Params
	{
	public:
		class UPCGMetadata*                                        InMetadataToCopy;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.Initialize
	 */
	struct UPCGMetadata_Initialize_Params
	{
	public:
		class UPCGMetadata*                                        InParent;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.HasCommonAttributes
	 */
	struct UPCGMetadata_HasCommonAttributes_Params
	{
	public:
		class UPCGMetadata*                                        InMetaData;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.HasAttribute
	 */
	struct UPCGMetadata_HasAttribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.GetAttributes
	 */
	struct UPCGMetadata_GetAttributes_Params
	{
	public:
		TArray<class FName>                                        AttributeNames;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<EPCGMetadataTypes>                                  AttributeTypes;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.DeleteAttribute
	 */
	struct UPCGMetadata_DeleteAttribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CreateVectorAttribute
	 */
	struct UPCGMetadata_CreateVectorAttribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DefaultValue;                                            // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowsInterpolation;                                    // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideParent;                                         // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CreateVector4Attribute
	 */
	struct UPCGMetadata_CreateVector4Attribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_69TH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector4                                            DefaultValue;                                            // 0x0010(0x0020)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowsInterpolation;                                    // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideParent;                                         // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CreateVector2Attribute
	 */
	struct UPCGMetadata_CreateVector2Attribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           DefaultValue;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowsInterpolation;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideParent;                                         // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CreateTransformAttribute
	 */
	struct UPCGMetadata_CreateTransformAttribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RIQS[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          DefaultValue;                                            // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowsInterpolation;                                    // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideParent;                                         // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CreateStringAttribute
	 */
	struct UPCGMetadata_CreateStringAttribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DefaultValue;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowsInterpolation;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideParent;                                         // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CreateRotatorAttribute
	 */
	struct UPCGMetadata_CreateRotatorAttribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            DefaultValue;                                            // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bAllowsInterpolation;                                    // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideParent;                                         // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CreateQuatAttribute
	 */
	struct UPCGMetadata_CreateQuatAttribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ALIU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               DefaultValue;                                            // 0x0010(0x0020)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowsInterpolation;                                    // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideParent;                                         // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CreateInteger64Attribute
	 */
	struct UPCGMetadata_CreateInteger64Attribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    DefaultValue;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowsInterpolation;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideParent;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CreateInteger32Attribute
	 */
	struct UPCGMetadata_CreateInteger32Attribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DefaultValue;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowsInterpolation;                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideParent;                                         // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CreateFloatAttribute
	 */
	struct UPCGMetadata_CreateFloatAttribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DefaultValue;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowsInterpolation;                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideParent;                                         // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CreateDoubleAttribute
	 */
	struct UPCGMetadata_CreateDoubleAttribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     DefaultValue;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowsInterpolation;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideParent;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CreateBoolAttribute
	 */
	struct UPCGMetadata_CreateBoolAttribute_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DefaultValue;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowsInterpolation;                                    // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideParent;                                         // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CopyExistingAttribute
	 */
	struct UPCGMetadata_CopyExistingAttribute_Params
	{
	public:
		class FName                                                AttributeToCopy;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewAttributeName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepParent;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CopyAttributes
	 */
	struct UPCGMetadata_CopyAttributes_Params
	{
	public:
		class UPCGMetadata*                                        InOther;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.CopyAttribute
	 */
	struct UPCGMetadata_CopyAttribute_Params
	{
	public:
		class UPCGMetadata*                                        InOther;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeToCopy;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewAttributeName;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.ClearAttribute
	 */
	struct UPCGMetadata_ClearAttribute_Params
	{
	public:
		class FName                                                AttributeToClear;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.AddEntry
	 */
	struct UPCGMetadata_AddEntry_Params
	{
	public:
		int64_t                                                    ParentEntryKey;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.AddAttributesFiltered
	 */
	struct UPCGMetadata_AddAttributesFiltered_Params
	{
	public:
		class UPCGMetadata*                                        InOther;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1TDS[0x50];                                  // 0x0008(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EPCGMetadataFilterMode                                     InFilterMode;                                            // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.AddAttributes
	 */
	struct UPCGMetadata_AddAttributes_Params
	{
	public:
		class UPCGMetadata*                                        InOther;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.AddAttribute
	 */
	struct UPCGMetadata_AddAttribute_Params
	{
	public:
		class UPCGMetadata*                                        InOther;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.AccumulateWeightedAttributesByKey
	 */
	struct UPCGMetadata_AccumulateWeightedAttributesByKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Weight;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetNonInterpolableAttributes;                           // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9FD3[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int64_t                                                    TargetKey;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    OutKey;                                                  // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadata.AccumulatePointWeightedAttributes
	 */
	struct UPCGMetadata_AccumulatePointWeightedAttributes_Params
	{
	public:
		struct FPCGPoint                                           InPoint;                                                 // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        InMetaData;                                              // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Weight;                                                  // 0x00D8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetNonInterpolableAttributes;                           // 0x00DC(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0KSN[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPCGPoint                                           OutPoint;                                                // 0x00E0(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetVectorAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetVectorAttribute
	 */
	struct UPCGMetadataAccessorHelpers_SetVectorAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x00E0(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetVector4AttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FSTA[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector4                                            Value;                                                   // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetVector4Attribute
	 */
	struct UPCGMetadataAccessorHelpers_SetVector4Attribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            Value;                                                   // 0x00E0(0x0020)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetVector2AttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Value;                                                   // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetVector2Attribute
	 */
	struct UPCGMetadataAccessorHelpers_SetVector2Attribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Value;                                                   // 0x00E0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetTransformAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8XE8[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Value;                                                   // 0x0020(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetTransformAttribute
	 */
	struct UPCGMetadataAccessorHelpers_SetTransformAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          Value;                                                   // 0x00E0(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetStringAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetStringAttribute
	 */
	struct UPCGMetadataAccessorHelpers_SetStringAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x00E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetRotatorAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Value;                                                   // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetRotatorAttribute
	 */
	struct UPCGMetadataAccessorHelpers_SetRotatorAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Value;                                                   // 0x00E0(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetQuatAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J5FV[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               Value;                                                   // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetQuatAttribute
	 */
	struct UPCGMetadataAccessorHelpers_SetQuatAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               Value;                                                   // 0x00E0(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetInteger64AttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    Value;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetInteger64Attribute
	 */
	struct UPCGMetadataAccessorHelpers_SetInteger64Attribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    Value;                                                   // 0x00E0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetInteger32AttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetInteger32Attribute
	 */
	struct UPCGMetadataAccessorHelpers_SetInteger32Attribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x00E0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetFloatAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetFloatAttribute
	 */
	struct UPCGMetadataAccessorHelpers_SetFloatAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x00E0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetDoubleAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     Value;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetDoubleAttribute
	 */
	struct UPCGMetadataAccessorHelpers_SetDoubleAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     Value;                                                   // 0x00E0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetBoolAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetBoolAttribute
	 */
	struct UPCGMetadataAccessorHelpers_SetBoolAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x00E0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.SetAttributeFromPropertyByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                PropertyName;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.InitializeMetadata
	 */
	struct UPCGMetadataAccessorHelpers_InitializeMetadata_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3LDX[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPCGPoint                                           ParentPoint;                                             // 0x00E0(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        ParentMetadata;                                          // 0x01B0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.HasAttributeSetByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.HasAttributeSet
	 */
	struct UPCGMetadataAccessorHelpers_HasAttributeSet_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetVectorAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetVectorAttribute
	 */
	struct UPCGMetadataAccessorHelpers_GetVectorAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x00E0(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetVector4AttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0O1T[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector4                                            ReturnValue;                                             // 0x0020(0x0020)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetVector4Attribute
	 */
	struct UPCGMetadataAccessorHelpers_GetVector4Attribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            ReturnValue;                                             // 0x00E0(0x0020)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetVector2AttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetVector2Attribute
	 */
	struct UPCGMetadataAccessorHelpers_GetVector2Attribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x00E0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetTransformAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6RDP[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0020(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetTransformAttribute
	 */
	struct UPCGMetadataAccessorHelpers_GetTransformAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x00E0(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetStringAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetStringAttribute
	 */
	struct UPCGMetadataAccessorHelpers_GetStringAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x00E0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetRotatorAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetRotatorAttribute
	 */
	struct UPCGMetadataAccessorHelpers_GetRotatorAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x00E0(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetQuatAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NXAN[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               ReturnValue;                                             // 0x0020(0x0020)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetQuatAttribute
	 */
	struct UPCGMetadataAccessorHelpers_GetQuatAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               ReturnValue;                                             // 0x00E0(0x0020)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetInteger64AttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetInteger64Attribute
	 */
	struct UPCGMetadataAccessorHelpers_GetInteger64Attribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x00E0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetInteger32AttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetInteger32Attribute
	 */
	struct UPCGMetadataAccessorHelpers_GetInteger32Attribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x00E0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetFloatAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetFloatAttribute
	 */
	struct UPCGMetadataAccessorHelpers_GetFloatAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x00E0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetDoubleAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetDoubleAttribute
	 */
	struct UPCGMetadataAccessorHelpers_GetDoubleAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     ReturnValue;                                             // 0x00E0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetBoolAttributeByMetadataKey
	 */
	struct UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.GetBoolAttribute
	 */
	struct UPCGMetadataAccessorHelpers_GetBoolAttribute_Params
	{
	public:
		struct FPCGPoint                                           Point;                                                   // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        MetaData;                                                // 0x00D0(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGMetadataAccessorHelpers.CopyPoint
	 */
	struct UPCGMetadataAccessorHelpers_CopyPoint_Params
	{
	public:
		struct FPCGPoint                                           InPoint;                                                 // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FPCGPoint                                           OutPoint;                                                // 0x00D0(0x00D0)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCopyMetadata;                                           // 0x01A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E2F7[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPCGMetadata*                                        InMetaData;                                              // 0x01A8(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGMetadata*                                        OutMetadata;                                             // 0x01B0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGComponent.SetGraph
	 */
	struct UPCGComponent_SetGraph_Params
	{
	public:
		class UPCGGraphInterface*                                  InGraph;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGComponent.NotifyPropertiesChangedFromBlueprint
	 */
	struct UPCGComponent_NotifyPropertiesChangedFromBlueprint_Params
	{	};

	/**
	 * Function PCG.PCGComponent.GetGeneratedGraphOutput
	 */
	struct UPCGComponent_GetGeneratedGraphOutput_Params
	{
	public:
		struct FPCGDataCollection                                  ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGComponent.GenerateLocal
	 */
	struct UPCGComponent_GenerateLocal_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGComponent.Generate
	 */
	struct UPCGComponent_Generate_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGComponent.ClearPCGLink
	 */
	struct UPCGComponent_ClearPCGLink_Params
	{
	public:
		class UClass*                                              TemplateActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGComponent.CleanupLocal
	 */
	struct UPCGComponent_CleanupLocal_Params
	{
	public:
		bool                                                       bRemoveComponents;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSave;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGComponent.Cleanup
	 */
	struct UPCGComponent_Cleanup_Params
	{
	public:
		bool                                                       bRemoveComponents;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSave;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGComponent.AddToManagedResources
	 */
	struct UPCGComponent_AddToManagedResources_Params
	{
	public:
		class UPCGManagedResource*                                 InResource;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGDataFunctionLibrary.GetTaggedParams
	 */
	struct UPCGDataFunctionLibrary_GetTaggedParams_Params
	{
	public:
		struct FPCGDataCollection                                  InCollection;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InTag;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPCGTaggedData>                              ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGDataFunctionLibrary.GetTaggedInputs
	 */
	struct UPCGDataFunctionLibrary_GetTaggedInputs_Params
	{
	public:
		struct FPCGDataCollection                                  InCollection;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InTag;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPCGTaggedData>                              ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGDataFunctionLibrary.GetParamsByPin
	 */
	struct UPCGDataFunctionLibrary_GetParamsByPin_Params
	{
	public:
		struct FPCGDataCollection                                  InCollection;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                InPinLabel;                                              // 0x0020(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPCGTaggedData>                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGDataFunctionLibrary.GetParams
	 */
	struct UPCGDataFunctionLibrary_GetParams_Params
	{
	public:
		struct FPCGDataCollection                                  InCollection;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FPCGTaggedData>                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGDataFunctionLibrary.GetInputsByPin
	 */
	struct UPCGDataFunctionLibrary_GetInputsByPin_Params
	{
	public:
		struct FPCGDataCollection                                  InCollection;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                InPinLabel;                                              // 0x0020(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPCGTaggedData>                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGDataFunctionLibrary.GetInputs
	 */
	struct UPCGDataFunctionLibrary_GetInputs_Params
	{
	public:
		struct FPCGDataCollection                                  InCollection;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FPCGTaggedData>                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGDataFunctionLibrary.GetAllSettings
	 */
	struct UPCGDataFunctionLibrary_GetAllSettings_Params
	{
	public:
		struct FPCGDataCollection                                  InCollection;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FPCGTaggedData>                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGGraphInterface.GetMutablePCGGraph
	 */
	struct UPCGGraphInterface_GetMutablePCGGraph_Params
	{
	public:
		class UPCGGraph*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGGraphInterface.GetConstPCGGraph
	 */
	struct UPCGGraphInterface_GetConstPCGGraph_Params
	{
	public:
		class UPCGGraph*                                           ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGGraph.RemoveNode
	 */
	struct UPCGGraph_RemoveNode_Params
	{
	public:
		class UPCGNode*                                            InNode;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGGraph.RemoveEdge
	 */
	struct UPCGGraph_RemoveEdge_Params
	{
	public:
		class UPCGNode*                                            From;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FromLabel;                                               // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGNode*                                            To;                                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ToLabel;                                                 // 0x0018(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGGraph.GetOutputNode
	 */
	struct UPCGGraph_GetOutputNode_Params
	{
	public:
		class UPCGNode*                                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGGraph.GetInputNode
	 */
	struct UPCGGraph_GetInputNode_Params
	{
	public:
		class UPCGNode*                                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGGraph.AddNodeOfType
	 */
	struct UPCGGraph_AddNodeOfType_Params
	{
	public:
		class UClass*                                              InSettingsClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGSettings*                                        DefaultNodeSettings;                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGNode*                                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGGraph.AddNodeInstance
	 */
	struct UPCGGraph_AddNodeInstance_Params
	{
	public:
		class UPCGSettings*                                        InSettings;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGNode*                                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGGraph.AddNodeCopy
	 */
	struct UPCGGraph_AddNodeCopy_Params
	{
	public:
		class UPCGSettings*                                        InSettings;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGSettings*                                        DefaultNodeSettings;                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGNode*                                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGGraph.AddEdge
	 */
	struct UPCGGraph_AddEdge_Params
	{
	public:
		class UPCGNode*                                            From;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FromPinLabel;                                            // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGNode*                                            To;                                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ToPinLabel;                                              // 0x0018(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGNode*                                            ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGParamData.MutableMetadata
	 */
	struct UPCGParamData_MutableMetadata_Params
	{
	public:
		class UPCGMetadata*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGParamData.FindOrAddMetadataKey
	 */
	struct UPCGParamData_FindOrAddMetadataKey_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGParamData.FindMetadataKey
	 */
	struct UPCGParamData_FindMetadataKey_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGParamData.FilterParamsByName
	 */
	struct UPCGParamData_FilterParamsByName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGParamData*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGParamData.FilterParamsByKey
	 */
	struct UPCGParamData_FilterParamsByKey_Params
	{
	public:
		int64_t                                                    InKey;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPCGParamData*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGParamData.ConstMetadata
	 */
	struct UPCGParamData_ConstMetadata_Params
	{
	public:
		class UPCGMetadata*                                        ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGPin.SetToolTip
	 */
	struct UPCGPin_SetToolTip_Params
	{
	public:
		class FText                                                InTooltip;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGPin.GetTooltip
	 */
	struct UPCGPin_GetTooltip_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PCG.PCGDeterminismTestBlueprintBase.ExecuteTest
	 */
	struct UPCGDeterminismTestBlueprintBase_ExecuteTest_Params
	{
	public:
		class UPCGNode*                                            InPCGNode;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDeterminismTestResult                              InOutTestResult;                                         // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
