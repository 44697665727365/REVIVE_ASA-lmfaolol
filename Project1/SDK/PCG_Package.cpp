/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGAttributeExtractorTestObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGAttributeExtractorTestObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGAttributeExtractorTestObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021CECB0
	 * 		Name   -> Function PCG.PCGAttributePropertySelectorBlueprintHelpers.SetPointProperty
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGAttributePropertySelector               Selector                                                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EPCGPointProperties                                InPointProperty                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGAttributePropertySelectorBlueprintHelpers::STATIC_SetPointProperty(struct FPCGAttributePropertySelector* Selector, EPCGPointProperties InPointProperty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGAttributePropertySelectorBlueprintHelpers.SetPointProperty");
		
		UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Params params {};
		params.InPointProperty = InPointProperty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selector != nullptr)
			*Selector = params.Selector;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021CEAC0
	 * 		Name   -> Function PCG.PCGAttributePropertySelectorBlueprintHelpers.SetAttributeName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGAttributePropertySelector               Selector                                                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        InAttributeName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGAttributePropertySelectorBlueprintHelpers::STATIC_SetAttributeName(struct FPCGAttributePropertySelector* Selector, const class FName& InAttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGAttributePropertySelectorBlueprintHelpers.SetAttributeName");
		
		UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Params params {};
		params.InAttributeName = InAttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selector != nullptr)
			*Selector = params.Selector;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021CE980
	 * 		Name   -> Function PCG.PCGAttributePropertySelectorBlueprintHelpers.GetName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGAttributePropertySelector               Selector                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FName UPCGAttributePropertySelectorBlueprintHelpers::STATIC_GetName(const struct FPCGAttributePropertySelector& Selector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGAttributePropertySelectorBlueprintHelpers.GetName");
		
		UPCGAttributePropertySelectorBlueprintHelpers_GetName_Params params {};
		params.Selector = Selector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGAttributePropertySelectorBlueprintHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGAttributePropertySelectorBlueprintHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGAttributePropertySelectorBlueprintHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EB3A0
	 * 		Name   -> Function PCG.PCGSpatialData.UnionWith
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UPCGSpatialData*                             InOther                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGUnionData* UPCGSpatialData::UnionWith(class UPCGSpatialData* InOther)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.UnionWith");
		
		UPCGSpatialData_UnionWith_Params params {};
		params.InOther = InOther;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EC100
	 * 		Name   -> Function PCG.PCGSpatialData.ToPointDataWithContext
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 Context                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UPCGPointData* UPCGSpatialData::ToPointDataWithContext(struct FPCGContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.ToPointDataWithContext");
		
		UPCGSpatialData_ToPointDataWithContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EC560
	 * 		Name   -> Function PCG.PCGSpatialData.ToPointData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPCGPointData* UPCGSpatialData::ToPointData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.ToPointData");
		
		UPCGSpatialData_ToPointData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EB2A0
	 * 		Name   -> Function PCG.PCGSpatialData.Subtract
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UPCGSpatialData*                             InOther                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGDifferenceData* UPCGSpatialData::Subtract(class UPCGSpatialData* InOther)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.Subtract");
		
		UPCGSpatialData_Subtract_Params params {};
		params.InOther = InOther;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EBCD0
	 * 		Name   -> Function PCG.PCGSpatialData.SamplePoint
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Bounds                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   OutPoint                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                OutMetadata                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGSpatialData::SamplePoint(const struct FTransform& Transform, const struct FBox& Bounds, struct FPCGPoint* OutPoint, class UPCGMetadata* OutMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.SamplePoint");
		
		UPCGSpatialData_SamplePoint_Params params {};
		params.Transform = Transform;
		params.Bounds = Bounds;
		params.OutMetadata = OutMetadata;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoint != nullptr)
			*OutPoint = params.OutPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EB7A0
	 * 		Name   -> Function PCG.PCGSpatialData.ProjectPoint
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTransform                                  InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        InBounds                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPCGProjectionParams                        InParams                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   OutPoint                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                OutMetadata                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGSpatialData::ProjectPoint(const struct FTransform& InTransform, const struct FBox& InBounds, const struct FPCGProjectionParams& InParams, struct FPCGPoint* OutPoint, class UPCGMetadata* OutMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.ProjectPoint");
		
		UPCGSpatialData_ProjectPoint_Params params {};
		params.InTransform = InTransform;
		params.InBounds = InBounds;
		params.InParams = InParams;
		params.OutMetadata = OutMetadata;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoint != nullptr)
			*OutPoint = params.OutPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EB4A0
	 * 		Name   -> Function PCG.PCGSpatialData.ProjectOn
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UPCGSpatialData*                             InOther                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPCGProjectionParams                        InParams                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UPCGSpatialData* UPCGSpatialData::ProjectOn(class UPCGSpatialData* InOther, const struct FPCGProjectionParams& InParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.ProjectOn");
		
		UPCGSpatialData_ProjectOn_Params params {};
		params.InOther = InOther;
		params.InParams = InParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021729A0
	 * 		Name   -> Function PCG.PCGSpatialData.MutableMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UPCGMetadata* UPCGSpatialData::MutableMetadata()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.MutableMetadata");
		
		UPCGSpatialData_MutableMetadata_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EB670
	 * 		Name   -> Function PCG.PCGSpatialData.IntersectWith
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UPCGSpatialData*                             InOther                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGIntersectionData* UPCGSpatialData::IntersectWith(class UPCGSpatialData* InOther)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.IntersectWith");
		
		UPCGSpatialData_IntersectWith_Params params {};
		params.InOther = InOther;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EAFA0
	 * 		Name   -> Function PCG.PCGSpatialData.InitializeFromData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGSpatialData*                             InSource                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                InMetadataParentOverride                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInheritMetadata                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInheritAttributes                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGSpatialData::InitializeFromData(class UPCGSpatialData* InSource, class UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.InitializeFromData");
		
		UPCGSpatialData_InitializeFromData_Params params {};
		params.InSource = InSource;
		params.InMetadataParentOverride = InMetadataParentOverride;
		params.bInheritMetadata = bInheritMetadata;
		params.bInheritAttributes = bInheritAttributes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EB770
	 * 		Name   -> Function PCG.PCGSpatialData.HasNonTrivialTransform
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPCGSpatialData::HasNonTrivialTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.HasNonTrivialTransform");
		
		UPCGSpatialData_HasNonTrivialTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EC720
	 * 		Name   -> Function PCG.PCGSpatialData.GetStrictBounds
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBox UPCGSpatialData::GetStrictBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.GetStrictBounds");
		
		UPCGSpatialData_GetStrictBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EC6D0
	 * 		Name   -> Function PCG.PCGSpatialData.GetNormal
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UPCGSpatialData::GetNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.GetNormal");
		
		UPCGSpatialData_GetNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EC7E0
	 * 		Name   -> Function PCG.PCGSpatialData.GetDimension
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPCGSpatialData::GetDimension()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.GetDimension");
		
		UPCGSpatialData_GetDimension_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EC5D0
	 * 		Name   -> Function PCG.PCGSpatialData.GetDensityAtPosition
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPCGSpatialData::GetDensityAtPosition(const struct FVector& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.GetDensityAtPosition");
		
		UPCGSpatialData_GetDensityAtPosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EC780
	 * 		Name   -> Function PCG.PCGSpatialData.GetBounds
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBox UPCGSpatialData::GetBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.GetBounds");
		
		UPCGSpatialData_GetBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EB260
	 * 		Name   -> Function PCG.PCGSpatialData.CreateEmptyMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UPCGMetadata* UPCGSpatialData::CreateEmptyMetadata()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.CreateEmptyMetadata");
		
		UPCGSpatialData_CreateEmptyMetadata_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021729A0
	 * 		Name   -> Function PCG.PCGSpatialData.ConstMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPCGMetadata* UPCGSpatialData::ConstMetadata()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGSpatialData.ConstMetadata");
		
		UPCGSpatialData_ConstMetadata_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSpatialData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSpatialData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSpatialData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSpatialDataWithPointCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSpatialDataWithPointCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSpatialDataWithPointCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGCollisionShapeData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGCollisionShapeData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGCollisionShapeData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSettingsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSettingsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSettingsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGDistanceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGDistanceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGDistanceSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGEngineSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGEngineSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGEngineSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGGatherSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGGatherSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGGatherSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGNormalToDensitySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGNormalToDensitySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGNormalToDensitySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGRerouteSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGRerouteSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGRerouteSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGUserParameterGetSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGUserParameterGetSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGUserParameterGetSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGUserParametersData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGUserParametersData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGUserParametersData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021DD630
	 * 		Name   -> Function PCG.PCGDifferenceData.SetDensityFunction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EPCGDifferenceDensityFunction                      InDensityFunction                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGDifferenceData::SetDensityFunction(EPCGDifferenceDensityFunction InDensityFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGDifferenceData.SetDensityFunction");
		
		UPCGDifferenceData_SetDensityFunction_Params params {};
		params.InDensityFunction = InDensityFunction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021DD830
	 * 		Name   -> Function PCG.PCGDifferenceData.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGSpatialData*                             InData                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGDifferenceData::Initialize(class UPCGSpatialData* InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGDifferenceData.Initialize");
		
		UPCGDifferenceData_Initialize_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021DD740
	 * 		Name   -> Function PCG.PCGDifferenceData.AddDifference
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGSpatialData*                             InDifference                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGDifferenceData::AddDifference(class UPCGSpatialData* InDifference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGDifferenceData.AddDifference");
		
		UPCGDifferenceData_AddDifference_Params params {};
		params.InDifference = InDifference;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGDifferenceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGDifferenceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGDifferenceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021DEED0
	 * 		Name   -> Function PCG.PCGIntersectionData.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGSpatialData*                             InA                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGSpatialData*                             InB                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGIntersectionData::Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGIntersectionData.Initialize");
		
		UPCGIntersectionData_Initialize_Params params {};
		params.InA = InA;
		params.InB = InB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGIntersectionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGIntersectionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGIntersectionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSurfaceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSurfaceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSurfaceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGLandscapeData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGLandscapeData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGLandscapeData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGPolyLineData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGPolyLineData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGPolyLineData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGLandscapeSplineData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGLandscapeSplineData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGLandscapeSplineData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021E4E40
	 * 		Name   -> Function PCG.PCGPointData.SetPoints
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPCGPoint>                           InPoints                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPCGPointData::SetPoints(TArray<struct FPCGPoint> InPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGPointData.SetPoints");
		
		UPCGPointData_SetPoints_Params params {};
		params.InPoints = InPoints;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021E5250
	 * 		Name   -> Function PCG.PCGPointData.GetPoints
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FPCGPoint> UPCGPointData::GetPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGPointData.GetPoints");
		
		UPCGPointData_GetPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021E4F50
	 * 		Name   -> Function PCG.PCGPointData.GetPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPCGPoint UPCGPointData::GetPoint(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGPointData.GetPoint");
		
		UPCGPointData_GetPoint_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021E4B40
	 * 		Name   -> Function PCG.PCGPointData.CopyPointsFrom
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGPointData*                               InData                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    InDataIndices                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPCGPointData::CopyPointsFrom(class UPCGPointData* InData, TArray<int32_t> InDataIndices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGPointData.CopyPointsFrom");
		
		UPCGPointData_CopyPointsFrom_Params params {};
		params.InData = InData;
		params.InDataIndices = InDataIndices;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGPointData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGPointData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGPointData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGPrimitiveData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGPrimitiveData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGPrimitiveData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGProjectionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGProjectionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGProjectionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGBaseTextureData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGBaseTextureData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGBaseTextureData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021EA8A0
	 * 		Name   -> Function PCG.PCGRenderTargetData.Initialize
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      InRenderTarget                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGRenderTargetData::Initialize(class UTextureRenderTarget2D* InRenderTarget, const struct FTransform& InTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGRenderTargetData.Initialize");
		
		UPCGRenderTargetData_Initialize_Params params {};
		params.InRenderTarget = InRenderTarget;
		params.InTransform = InTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGRenderTargetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGRenderTargetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGRenderTargetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSplineData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSplineData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSplineData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSplineProjectionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSplineProjectionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSplineProjectionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021F21E0
	 * 		Name   -> Function PCG.PCGTextureData.Initialize
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGTextureData::Initialize(class UTexture2D* InTexture, const struct FTransform& InTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGTextureData.Initialize");
		
		UPCGTextureData_Initialize_Params params {};
		params.InTexture = InTexture;
		params.InTransform = InTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGTextureData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGTextureData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGTextureData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021F3CC0
	 * 		Name   -> Function PCG.PCGUnionData.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGSpatialData*                             InA                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGSpatialData*                             InB                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGUnionData::Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGUnionData.Initialize");
		
		UPCGUnionData_Initialize_Params params {};
		params.InA = InA;
		params.InB = InB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021F3BD0
	 * 		Name   -> Function PCG.PCGUnionData.AddData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGSpatialData*                             InData                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGUnionData::AddData(class UPCGSpatialData* InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGUnionData.AddData");
		
		UPCGUnionData_AddData_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGUnionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGUnionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGUnionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGVolumeData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGVolumeData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGVolumeData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGWorldVolumetricData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGWorldVolumetricData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGWorldVolumetricData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGWorldRayHitData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGWorldRayHitData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGWorldRayHitData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataBitwiseSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataBitwiseSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataBitwiseSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataBooleanSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataBooleanSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataBooleanSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataBreakTransformSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataBreakTransformSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataBreakTransformSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataBreakVectorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataBreakVectorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataBreakVectorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataCompareSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataCompareSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataCompareSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataOperationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataOperationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataOperationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataMakeTransformSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataMakeTransformSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataMakeTransformSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataMakeVectorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataMakeVectorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataMakeVectorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataMathsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataMathsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataMathsSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataPartitionSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataPartitionSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataPartitionSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataRenameSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataRenameSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataRenameSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataRotatorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataRotatorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataRotatorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataTransformSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataTransformSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataTransformSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataTrigSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataTrigSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataTrigSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataVectorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataVectorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataVectorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGAttributeFilterSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGAttributeFilterSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGAttributeFilterSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGAttributeGetFromPointIndexSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGAttributeGetFromPointIndexSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGAttributeGetFromPointIndexSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGAttributeReduceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGAttributeReduceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGAttributeReduceSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGAttributeSelectSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGAttributeSelectSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGAttributeSelectSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGAttributeTransferSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGAttributeTransferSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGAttributeTransferSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGBoundsModifierSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGBoundsModifierSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGBoundsModifierSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGCollapseSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGCollapseSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGCollapseSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGCopyPointsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGCopyPointsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGCopyPointsSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGCreateAttributeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGCreateAttributeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGCreateAttributeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGCreateAttributeSetSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGCreateAttributeSetSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGCreateAttributeSetSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGCreateSplineSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGCreateSplineSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGCreateSplineSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGDataFromActorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGDataFromActorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGDataFromActorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGDataTableRowToParamDataSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGDataTableRowToParamDataSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGDataTableRowToParamDataSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGDebugSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGDebugSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGDebugSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGDensityFilterSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGDensityFilterSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGDensityFilterSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGDensityNoiseSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGDensityNoiseSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGDensityNoiseSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGLinearDensityRemapSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGLinearDensityRemapSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGLinearDensityRemapSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGDensityRemapSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGDensityRemapSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGDensityRemapSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGDifferenceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGDifferenceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGDifferenceSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PCG.PCGBlueprintElement.VariableLoopBody
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 InContext                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               InData                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   InPoint                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                OutMetadata                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPCGPoint> UPCGBlueprintElement::VariableLoopBody(const struct FPCGContext& InContext, class UPCGPointData* InData, const struct FPCGPoint& InPoint, class UPCGMetadata* OutMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.VariableLoopBody");
		
		UPCGBlueprintElement_VariableLoopBody_Params params {};
		params.InContext = InContext;
		params.InData = InData;
		params.InPoint = InPoint;
		params.OutMetadata = OutMetadata;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02256090
	 * 		Name   -> Function PCG.PCGBlueprintElement.VariableLoop
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 InContext                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               InData                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               OutData                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               OptionalOutData                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGBlueprintElement::VariableLoop(struct FPCGContext* InContext, class UPCGPointData* InData, class UPCGPointData** OutData, class UPCGPointData* OptionalOutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.VariableLoop");
		
		UPCGBlueprintElement_VariableLoop_Params params {};
		params.InData = InData;
		params.OptionalOutData = OptionalOutData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InContext != nullptr)
			*InContext = params.InContext;
		if (OutData != nullptr)
			*OutData = params.OutData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PCG.PCGBlueprintElement.PointLoopBody
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 InContext                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               InData                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   InPoint                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   OutPoint                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                OutMetadata                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGBlueprintElement::PointLoopBody(const struct FPCGContext& InContext, class UPCGPointData* InData, const struct FPCGPoint& InPoint, struct FPCGPoint* OutPoint, class UPCGMetadata* OutMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.PointLoopBody");
		
		UPCGBlueprintElement_PointLoopBody_Params params {};
		params.InContext = InContext;
		params.InData = InData;
		params.InPoint = InPoint;
		params.OutMetadata = OutMetadata;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoint != nullptr)
			*OutPoint = params.OutPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02256710
	 * 		Name   -> Function PCG.PCGBlueprintElement.PointLoop
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 InContext                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               InData                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               OutData                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               OptionalOutData                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGBlueprintElement::PointLoop(struct FPCGContext* InContext, class UPCGPointData* InData, class UPCGPointData** OutData, class UPCGPointData* OptionalOutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.PointLoop");
		
		UPCGBlueprintElement_PointLoop_Params params {};
		params.InData = InData;
		params.OptionalOutData = OptionalOutData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InContext != nullptr)
			*InContext = params.InContext;
		if (OutData != nullptr)
			*OutData = params.OutData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02254FA0
	 * 		Name   -> Function PCG.PCGBlueprintElement.OutputLabels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	void UPCGBlueprintElement::OutputLabels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.OutputLabels");
		
		UPCGBlueprintElement_OutputLabels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02255140
	 * 		Name   -> Function PCG.PCGBlueprintElement.NodeTypeOverride
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	EPCGSettingsType UPCGBlueprintElement::NodeTypeOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.NodeTypeOverride");
		
		UPCGBlueprintElement_NodeTypeOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022551B0
	 * 		Name   -> Function PCG.PCGBlueprintElement.NodeTitleOverride
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class FName UPCGBlueprintElement::NodeTitleOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.NodeTitleOverride");
		
		UPCGBlueprintElement_NodeTitleOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02255170
	 * 		Name   -> Function PCG.PCGBlueprintElement.NodeColorOverride
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
	 */
	struct FLinearColor UPCGBlueprintElement::NodeColorOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.NodeColorOverride");
		
		UPCGBlueprintElement_NodeColorOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PCG.PCGBlueprintElement.NestedLoopBody
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 InContext                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               InOuterData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               InInnerData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   InOuterPoint                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   InInnerPoint                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   OutPoint                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                OutMetadata                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGBlueprintElement::NestedLoopBody(const struct FPCGContext& InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, const struct FPCGPoint& InOuterPoint, const struct FPCGPoint& InInnerPoint, struct FPCGPoint* OutPoint, class UPCGMetadata* OutMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.NestedLoopBody");
		
		UPCGBlueprintElement_NestedLoopBody_Params params {};
		params.InContext = InContext;
		params.InOuterData = InOuterData;
		params.InInnerData = InInnerData;
		params.InOuterPoint = InOuterPoint;
		params.InInnerPoint = InInnerPoint;
		params.OutMetadata = OutMetadata;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoint != nullptr)
			*OutPoint = params.OutPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02255850
	 * 		Name   -> Function PCG.PCGBlueprintElement.NestedLoop
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 InContext                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               InOuterData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               InInnerData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               OutData                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               OptionalOutData                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGBlueprintElement::NestedLoop(struct FPCGContext* InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, class UPCGPointData** OutData, class UPCGPointData* OptionalOutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.NestedLoop");
		
		UPCGBlueprintElement_NestedLoop_Params params {};
		params.InOuterData = InOuterData;
		params.InInnerData = InInnerData;
		params.OptionalOutData = OptionalOutData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InContext != nullptr)
			*InContext = params.InContext;
		if (OutData != nullptr)
			*OutData = params.OutData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PCG.PCGBlueprintElement.IterationLoopBody
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 InContext                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int64_t                                            Iteration                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGSpatialData*                             InA                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGSpatialData*                             InB                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   OutPoint                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                OutMetadata                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGBlueprintElement::IterationLoopBody(const struct FPCGContext& InContext, int64_t Iteration, class UPCGSpatialData* InA, class UPCGSpatialData* InB, struct FPCGPoint* OutPoint, class UPCGMetadata* OutMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.IterationLoopBody");
		
		UPCGBlueprintElement_IterationLoopBody_Params params {};
		params.InContext = InContext;
		params.Iteration = Iteration;
		params.InA = InA;
		params.InB = InB;
		params.OutMetadata = OutMetadata;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoint != nullptr)
			*OutPoint = params.OutPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022551F0
	 * 		Name   -> Function PCG.PCGBlueprintElement.IterationLoop
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 InContext                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int64_t                                            NumIterations                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               OutData                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGSpatialData*                             OptionalA                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGSpatialData*                             OptionalB                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               OptionalOutData                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGBlueprintElement::IterationLoop(struct FPCGContext* InContext, int64_t NumIterations, class UPCGPointData** OutData, class UPCGSpatialData* OptionalA, class UPCGSpatialData* OptionalB, class UPCGPointData* OptionalOutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.IterationLoop");
		
		UPCGBlueprintElement_IterationLoop_Params params {};
		params.NumIterations = NumIterations;
		params.OptionalA = OptionalA;
		params.OptionalB = OptionalB;
		params.OptionalOutData = OptionalOutData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InContext != nullptr)
			*InContext = params.InContext;
		if (OutData != nullptr)
			*OutData = params.OutData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02255070
	 * 		Name   -> Function PCG.PCGBlueprintElement.InputLabels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	void UPCGBlueprintElement::InputLabels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.InputLabels");
		
		UPCGBlueprintElement_InputLabels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02254C20
	 * 		Name   -> Function PCG.PCGBlueprintElement.GetSeed
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 InContext                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UPCGBlueprintElement::GetSeed(struct FPCGContext* InContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.GetSeed");
		
		UPCGBlueprintElement_GetSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InContext != nullptr)
			*InContext = params.InContext;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02254890
	 * 		Name   -> Function PCG.PCGBlueprintElement.GetRandomStream
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 InContext                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FRandomStream UPCGBlueprintElement::GetRandomStream(struct FPCGContext* InContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.GetRandomStream");
		
		UPCGBlueprintElement_GetRandomStream_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InContext != nullptr)
			*InContext = params.InContext;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02256E30
	 * 		Name   -> Function PCG.PCGBlueprintElement.ExecuteWithContext
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPCGContext                                 InContext                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FPCGDataCollection                          Input                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FPCGDataCollection                          Output                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPCGBlueprintElement::ExecuteWithContext(struct FPCGContext* InContext, const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.ExecuteWithContext");
		
		UPCGBlueprintElement_ExecuteWithContext_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InContext != nullptr)
			*InContext = params.InContext;
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PCG.PCGBlueprintElement.Execute
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPCGDataCollection                          Input                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FPCGDataCollection                          Output                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPCGBlueprintElement::Execute(const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintElement.Execute");
		
		UPCGBlueprintElement_Execute_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGBlueprintElement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGBlueprintElement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGBlueprintElement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02259540
	 * 		Name   -> Function PCG.PCGBlueprintSettings.SetElementType
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InElementType                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGBlueprintElement*                        ElementInstance                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGBlueprintSettings::SetElementType(class UClass* InElementType, class UPCGBlueprintElement** ElementInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintSettings.SetElementType");
		
		UPCGBlueprintSettings_SetElementType_Params params {};
		params.InElementType = InElementType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ElementInstance != nullptr)
			*ElementInstance = params.ElementInstance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02259520
	 * 		Name   -> Function PCG.PCGBlueprintSettings.GetElementType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClass* UPCGBlueprintSettings::GetElementType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintSettings.GetElementType");
		
		UPCGBlueprintSettings_GetElementType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGBlueprintSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGBlueprintSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGBlueprintSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGFilterByTagSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGFilterByTagSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGFilterByTagSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGIntersectionSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGIntersectionSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGIntersectionSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMergeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMergeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMergeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGPointExtentsModifierSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGPointExtentsModifierSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGPointExtentsModifierSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGPointFilterSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGPointFilterSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGPointFilterSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0225FB10
	 * 		Name   -> Function PCG.PCGPointMatchAndSetSettings.SetMatchAndSetType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InMatchAndSetType                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGPointMatchAndSetSettings::SetMatchAndSetType(class UClass* InMatchAndSetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGPointMatchAndSetSettings.SetMatchAndSetType");
		
		UPCGPointMatchAndSetSettings_SetMatchAndSetType_Params params {};
		params.InMatchAndSetType = InMatchAndSetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGPointMatchAndSetSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGPointMatchAndSetSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGPointMatchAndSetSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGPointSamplerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGPointSamplerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGPointSamplerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGProjectionSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGProjectionSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGProjectionSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGPropertyToParamDataSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGPropertyToParamDataSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGPropertyToParamDataSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSelfPruningSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSelfPruningSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSelfPruningSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGBaseSubgraphSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGBaseSubgraphSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGBaseSubgraphSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSpawnActorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSpawnActorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSpawnActorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023CE910
	 * 		Name   -> Function PCG.PCGNode.RemoveEdgeTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        FromPinLable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGNode*                                    To                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ToPinLabel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGNode::RemoveEdgeTo(const class FName& FromPinLable, class UPCGNode* To, const class FName& ToPinLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGNode.RemoveEdgeTo");
		
		UPCGNode_RemoveEdgeTo_Params params {};
		params.FromPinLable = FromPinLable;
		params.To = To;
		params.ToPinLabel = ToPinLabel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023CE8C0
	 * 		Name   -> Function PCG.PCGNode.GetSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPCGSettings* UPCGNode::GetSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGNode.GetSettings");
		
		UPCGNode_GetSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023CEF50
	 * 		Name   -> Function PCG.PCGNode.GetGraph
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPCGGraph* UPCGNode::GetGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGNode.GetGraph");
		
		UPCGNode_GetGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023CEC20
	 * 		Name   -> Function PCG.PCGNode.AddEdgeTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        FromPinLabel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGNode*                                    To                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ToPinLabel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGNode* UPCGNode::AddEdgeTo(const class FName& FromPinLabel, class UPCGNode* To, const class FName& ToPinLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGNode.AddEdgeTo");
		
		UPCGNode_AddEdgeTo_Params params {};
		params.FromPinLabel = FromPinLabel;
		params.To = To;
		params.ToPinLabel = ToPinLabel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGBaseSubgraphNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGBaseSubgraphNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGBaseSubgraphNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSpawnActorNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSpawnActorNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSpawnActorNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSplineSamplerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSplineSamplerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSplineSamplerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DA2E0
	 * 		Name   -> Function PCG.PCGStaticMeshSpawnerSettings.SetMeshSelectorType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InMeshSelectorType                                         (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGStaticMeshSpawnerSettings::SetMeshSelectorType(class UClass* InMeshSelectorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGStaticMeshSpawnerSettings.SetMeshSelectorType");
		
		UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Params params {};
		params.InMeshSelectorType = InMeshSelectorType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022DA100
	 * 		Name   -> Function PCG.PCGStaticMeshSpawnerSettings.SetInstancePackerType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InInstancePackerType                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGStaticMeshSpawnerSettings::SetInstancePackerType(class UClass* InInstancePackerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGStaticMeshSpawnerSettings.SetInstancePackerType");
		
		UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Params params {};
		params.InInstancePackerType = InInstancePackerType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGStaticMeshSpawnerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGStaticMeshSpawnerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGStaticMeshSpawnerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSurfaceSamplerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSurfaceSamplerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSurfaceSamplerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGTextureSamplerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGTextureSamplerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGTextureSamplerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGTransformPointsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGTransformPointsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGTransformPointsSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGGetLandscapeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGGetLandscapeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGGetLandscapeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGGetSplineSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGGetSplineSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGGetSplineSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGGetVolumeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGGetVolumeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGGetVolumeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGGetPrimitiveSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGGetPrimitiveSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGGetPrimitiveSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGUnionSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGUnionSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGUnionSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGVolumeSamplerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGVolumeSamplerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGVolumeSamplerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGWorldQuerySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGWorldQuerySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGWorldQuerySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGWorldRayHitSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGWorldRayHitSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGWorldRayHitSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGLandscapeCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGLandscapeCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGLandscapeCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F1890
	 * 		Name   -> Function PCG.PCGPartitionActor.GetOriginalComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UPCGComponent*                               LocalComponent                                             (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGComponent* APCGPartitionActor::GetOriginalComponent(class UPCGComponent* LocalComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGPartitionActor.GetOriginalComponent");
		
		APCGPartitionActor_GetOriginalComponent_Params params {};
		params.LocalComponent = LocalComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F1980
	 * 		Name   -> Function PCG.PCGPartitionActor.GetLocalComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UPCGComponent*                               OriginalComponent                                          (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGComponent* APCGPartitionActor::GetLocalComponent(class UPCGComponent* OriginalComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGPartitionActor.GetLocalComponent");
		
		APCGPartitionActor_GetLocalComponent_Params params {};
		params.OriginalComponent = OriginalComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APCGPartitionActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APCGPartitionActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGPartitionActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGActorHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGActorHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGActorHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F7E20
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.SetSeedFromPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   InPoint                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPCGBlueprintHelpers::STATIC_SetSeedFromPosition(struct FPCGPoint* InPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.SetSeedFromPosition");
		
		UPCGBlueprintHelpers_SetSeedFromPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPoint != nullptr)
			*InPoint = params.InPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F5F30
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.SetLocalCenter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   InPoint                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InLocalCenter                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGBlueprintHelpers::STATIC_SetLocalCenter(struct FPCGPoint* InPoint, const struct FVector& InLocalCenter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.SetLocalCenter");
		
		UPCGBlueprintHelpers_SetLocalCenter_Params params {};
		params.InLocalCenter = InLocalCenter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPoint != nullptr)
			*InPoint = params.InPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F6420
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.SetExtents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   InPoint                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InExtents                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGBlueprintHelpers::STATIC_SetExtents(struct FPCGPoint* InPoint, const struct FVector& InExtents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.SetExtents");
		
		UPCGBlueprintHelpers_SetExtents_Params params {};
		params.InExtents = InExtents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPoint != nullptr)
			*InPoint = params.InPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F5AB0
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetTransformedBounds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   InPoint                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FBox UPCGBlueprintHelpers::STATIC_GetTransformedBounds(const struct FPCGPoint& InPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetTransformedBounds");
		
		UPCGBlueprintHelpers_GetTransformedBounds_Params params {};
		params.InPoint = InPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F4F90
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetTaskId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGContext                                 Context                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int64_t UPCGBlueprintHelpers::STATIC_GetTaskId(struct FPCGContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetTaskId");
		
		UPCGBlueprintHelpers_GetTaskId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F76F0
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGContext                                 Context                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UPCGSettings* UPCGBlueprintHelpers::STATIC_GetSettings(struct FPCGContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetSettings");
		
		UPCGBlueprintHelpers_GetSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F7A70
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetRandomStream
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   InPoint                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGSettings*                                OptionalSettings                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGComponent*                               OptionalComponent                                          (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRandomStream UPCGBlueprintHelpers::STATIC_GetRandomStream(const struct FPCGPoint& InPoint, class UPCGSettings* OptionalSettings, class UPCGComponent* OptionalComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetRandomStream");
		
		UPCGBlueprintHelpers_GetRandomStream_Params params {};
		params.InPoint = InPoint;
		params.OptionalSettings = OptionalSettings;
		params.OptionalComponent = OptionalComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F6740
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetOriginalComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGContext                                 Context                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UPCGComponent* UPCGBlueprintHelpers::STATIC_GetOriginalComponent(struct FPCGContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetOriginalComponent");
		
		UPCGBlueprintHelpers_GetOriginalComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F5CF0
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetLocalCenter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   InPoint                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector UPCGBlueprintHelpers::STATIC_GetLocalCenter(const struct FPCGPoint& InPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetLocalCenter");
		
		UPCGBlueprintHelpers_GetLocalCenter_Params params {};
		params.InPoint = InPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F5320
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetInterpolatedPCGLandscapeLayerWeights
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPCGLandscapeLayerWeight> UPCGBlueprintHelpers::STATIC_GetInterpolatedPCGLandscapeLayerWeights(class UObject* WorldContextObject, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetInterpolatedPCGLandscapeLayerWeights");
		
		UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F6E90
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetInputData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGContext                                 Context                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UPCGData* UPCGBlueprintHelpers::STATIC_GetInputData(struct FPCGContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetInputData");
		
		UPCGBlueprintHelpers_GetInputData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F61E0
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetExtents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   InPoint                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector UPCGBlueprintHelpers::STATIC_GetExtents(const struct FPCGPoint& InPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetExtents");
		
		UPCGBlueprintHelpers_GetExtents_Params params {};
		params.InPoint = InPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F6AC0
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGContext                                 Context                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UPCGComponent* UPCGBlueprintHelpers::STATIC_GetComponent(struct FPCGContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetComponent");
		
		UPCGBlueprintHelpers_GetComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F5690
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetActorLocalBoundsPCG
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnorePCGCreatedComponents                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBox UPCGBlueprintHelpers::STATIC_GetActorLocalBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetActorLocalBoundsPCG");
		
		UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Params params {};
		params.InActor = InActor;
		params.bIgnorePCGCreatedComponents = bIgnorePCGCreatedComponents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F72C0
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetActorData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGContext                                 Context                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UPCGData* UPCGBlueprintHelpers::STATIC_GetActorData(struct FPCGContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetActorData");
		
		UPCGBlueprintHelpers_GetActorData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F5850
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.GetActorBoundsPCG
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnorePCGCreatedComponents                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBox UPCGBlueprintHelpers::STATIC_GetActorBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.GetActorBoundsPCG");
		
		UPCGBlueprintHelpers_GetActorBoundsPCG_Params params {};
		params.InActor = InActor;
		params.bIgnorePCGCreatedComponents = bIgnorePCGCreatedComponents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F5500
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.CreatePCGDataFromActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bParseActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGData* UPCGBlueprintHelpers::STATIC_CreatePCGDataFromActor(class AActor* InActor, bool bParseActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.CreatePCGDataFromActor");
		
		UPCGBlueprintHelpers_CreatePCGDataFromActor_Params params {};
		params.InActor = InActor;
		params.bParseActor = bParseActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022F8060
	 * 		Name   -> Function PCG.PCGBlueprintHelpers.ComputeSeedFromPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPCGBlueprintHelpers::STATIC_ComputeSeedFromPosition(const struct FVector& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGBlueprintHelpers.ComputeSeedFromPosition");
		
		UPCGBlueprintHelpers_ComputeSeedFromPosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGBlueprintHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGBlueprintHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGBlueprintHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022FABD0
	 * 		Name   -> Function PCG.PCGInstancePackerBase.PackInstances
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 Context                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UPCGSpatialData*                             InSpatialData                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPCGMeshInstanceList                        InstanceList                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FPCGPackedCustomData                        OutPackedCustomData                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPCGInstancePackerBase::PackInstances(struct FPCGContext* Context, class UPCGSpatialData* InSpatialData, const struct FPCGMeshInstanceList& InstanceList, struct FPCGPackedCustomData* OutPackedCustomData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGInstancePackerBase.PackInstances");
		
		UPCGInstancePackerBase_PackInstances_Params params {};
		params.InSpatialData = InSpatialData;
		params.InstanceList = InstanceList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
		if (OutPackedCustomData != nullptr)
			*OutPackedCustomData = params.OutPackedCustomData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022FA5D0
	 * 		Name   -> Function PCG.PCGInstancePackerBase.PackCustomDataFromAttributes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPCGMeshInstanceList                        InstanceList                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                AttributeNames                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FPCGPackedCustomData                        OutPackedCustomData                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPCGInstancePackerBase::PackCustomDataFromAttributes(const struct FPCGMeshInstanceList& InstanceList, class UPCGMetadata* MetaData, TArray<class FName> AttributeNames, struct FPCGPackedCustomData* OutPackedCustomData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGInstancePackerBase.PackCustomDataFromAttributes");
		
		UPCGInstancePackerBase_PackCustomDataFromAttributes_Params params {};
		params.InstanceList = InstanceList;
		params.MetaData = MetaData;
		params.AttributeNames = AttributeNames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPackedCustomData != nullptr)
			*OutPackedCustomData = params.OutPackedCustomData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022FA9D0
	 * 		Name   -> Function PCG.PCGInstancePackerBase.AddTypeToPacking
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            TypeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPCGPackedCustomData                        OutPackedCustomData                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UPCGInstancePackerBase::AddTypeToPacking(int32_t TypeId, struct FPCGPackedCustomData* OutPackedCustomData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGInstancePackerBase.AddTypeToPacking");
		
		UPCGInstancePackerBase_AddTypeToPacking_Params params {};
		params.TypeId = TypeId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPackedCustomData != nullptr)
			*OutPackedCustomData = params.OutPackedCustomData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGInstancePackerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGInstancePackerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGInstancePackerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGInstancePackerByAttribute.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGInstancePackerByAttribute::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGInstancePackerByAttribute");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGInstancePackerByRegex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGInstancePackerByRegex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGInstancePackerByRegex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022FCDE0
	 * 		Name   -> Function PCG.PCGMatchAndSetBase.ValidatePreconditions
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UPCGPointData*                               InPointData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGMatchAndSetBase::ValidatePreconditions(class UPCGPointData* InPointData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMatchAndSetBase.ValidatePreconditions");
		
		UPCGMatchAndSetBase_ValidatePreconditions_Params params {};
		params.InPointData = InPointData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022FC8B0
	 * 		Name   -> Function PCG.PCGMatchAndSetBase.MatchAndSet
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPCGContext                                 Context                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UPCGPointMatchAndSetSettings*                InSettings                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               InPointData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGPointData*                               OutPointData                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMatchAndSetBase::MatchAndSet(struct FPCGContext* Context, class UPCGPointMatchAndSetSettings* InSettings, class UPCGPointData* InPointData, class UPCGPointData* OutPointData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMatchAndSetBase.MatchAndSet");
		
		UPCGMatchAndSetBase_MatchAndSet_Params params {};
		params.InSettings = InSettings;
		params.InPointData = InPointData;
		params.OutPointData = OutPointData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMatchAndSetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMatchAndSetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMatchAndSetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMatchAndSetByAttribute.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMatchAndSetByAttribute::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMatchAndSetByAttribute");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMatchAndSetWeighted.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMatchAndSetWeighted::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMatchAndSetWeighted");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMatchAndSetWeightedByCategory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMatchAndSetWeightedByCategory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMatchAndSetWeightedByCategory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMeshSelectorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMeshSelectorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMeshSelectorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMeshSelectorByAttribute.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMeshSelectorByAttribute::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMeshSelectorByAttribute");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMeshSelectorWeighted.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMeshSelectorWeighted::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMeshSelectorWeighted");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMeshSelectorWeightedByCategory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMeshSelectorWeightedByCategory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMeshSelectorWeightedByCategory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235C090
	 * 		Name   -> Function PCG.PCGMetadata.SetPointAttributes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   OutPoint                                                   (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::SetPointAttributes(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, struct FPCGPoint* OutPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.SetPointAttributes");
		
		UPCGMetadata_SetPointAttributes_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoint != nullptr)
			*OutPoint = params.OutPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235CE00
	 * 		Name   -> Function PCG.PCGMetadata.SetAttributesByKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                InMetaData                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            TargetKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            OutKey                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::SetAttributesByKey(int64_t Key, class UPCGMetadata* InMetaData, int64_t TargetKey, int64_t* OutKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.SetAttributesByKey");
		
		UPCGMetadata_SetAttributesByKey_Params params {};
		params.Key = Key;
		params.InMetaData = InMetaData;
		params.TargetKey = TargetKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKey != nullptr)
			*OutKey = params.OutKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235D980
	 * 		Name   -> Function PCG.PCGMetadata.ResetWeightedAttributesByKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            TargetKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            OutKey                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::ResetWeightedAttributesByKey(int64_t TargetKey, int64_t* OutKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.ResetWeightedAttributesByKey");
		
		UPCGMetadata_ResetWeightedAttributesByKey_Params params {};
		params.TargetKey = TargetKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKey != nullptr)
			*OutKey = params.OutKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235BE90
	 * 		Name   -> Function PCG.PCGMetadata.ResetPointWeightedAttributes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   OutPoint                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::ResetPointWeightedAttributes(struct FPCGPoint* OutPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.ResetPointWeightedAttributes");
		
		UPCGMetadata_ResetPointWeightedAttributes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoint != nullptr)
			*OutPoint = params.OutPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235E260
	 * 		Name   -> Function PCG.PCGMetadata.RenameAttribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeToRename                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewAttributeName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGMetadata::RenameAttribute(const class FName& AttributeToRename, const class FName& NewAttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.RenameAttribute");
		
		UPCGMetadata_RenameAttribute_Params params {};
		params.AttributeToRename = AttributeToRename;
		params.NewAttributeName = NewAttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235C710
	 * 		Name   -> Function PCG.PCGMetadata.MergePointAttributes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   PointA                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetadataA                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   PointB                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetadataB                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   TargetPoint                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EPCGMetadataOp                                     Op                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::MergePointAttributes(const struct FPCGPoint& PointA, class UPCGMetadata* MetadataA, const struct FPCGPoint& PointB, class UPCGMetadata* MetadataB, struct FPCGPoint* TargetPoint, EPCGMetadataOp Op)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.MergePointAttributes");
		
		UPCGMetadata_MergePointAttributes_Params params {};
		params.PointA = PointA;
		params.MetadataA = MetadataA;
		params.PointB = PointB;
		params.MetadataB = MetadataB;
		params.Op = Op;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetPoint != nullptr)
			*TargetPoint = params.TargetPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235DB10
	 * 		Name   -> Function PCG.PCGMetadata.MergeAttributesByKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            KeyA                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetadataA                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            KeyB                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetadataB                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            TargetKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPCGMetadataOp                                     Op                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            OutKey                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::MergeAttributesByKey(int64_t KeyA, class UPCGMetadata* MetadataA, int64_t KeyB, class UPCGMetadata* MetadataB, int64_t TargetKey, EPCGMetadataOp Op, int64_t* OutKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.MergeAttributesByKey");
		
		UPCGMetadata_MergeAttributesByKey_Params params {};
		params.KeyA = KeyA;
		params.MetadataA = MetadataA;
		params.KeyB = KeyB;
		params.MetadataB = MetadataB;
		params.TargetKey = TargetKey;
		params.Op = Op;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKey != nullptr)
			*OutKey = params.OutKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02362530
	 * 		Name   -> Function PCG.PCGMetadata.InitializeWithAttributeFilter
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGMetadata*                                InParent                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPCGMetadataFilterMode                             InFilterMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::InitializeWithAttributeFilter(class UPCGMetadata* InParent, EPCGMetadataFilterMode InFilterMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.InitializeWithAttributeFilter");
		
		UPCGMetadata_InitializeWithAttributeFilter_Params params {};
		params.InParent = InParent;
		params.InFilterMode = InFilterMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02361DD0
	 * 		Name   -> Function PCG.PCGMetadata.InitializeAsCopyWithAttributeFilter
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGMetadata*                                InMetadataToCopy                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPCGMetadataFilterMode                             InFilterMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::InitializeAsCopyWithAttributeFilter(class UPCGMetadata* InMetadataToCopy, EPCGMetadataFilterMode InFilterMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.InitializeAsCopyWithAttributeFilter");
		
		UPCGMetadata_InitializeAsCopyWithAttributeFilter_Params params {};
		params.InMetadataToCopy = InMetadataToCopy;
		params.InFilterMode = InFilterMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02362440
	 * 		Name   -> Function PCG.PCGMetadata.InitializeAsCopy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGMetadata*                                InMetadataToCopy                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::InitializeAsCopy(class UPCGMetadata* InMetadataToCopy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.InitializeAsCopy");
		
		UPCGMetadata_InitializeAsCopy_Params params {};
		params.InMetadataToCopy = InMetadataToCopy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02362B50
	 * 		Name   -> Function PCG.PCGMetadata.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGMetadata*                                InParent                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::Initialize(class UPCGMetadata* InParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.Initialize");
		
		UPCGMetadata_Initialize_Params params {};
		params.InParent = InParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235E8D0
	 * 		Name   -> Function PCG.PCGMetadata.HasCommonAttributes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UPCGMetadata*                                InMetaData                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGMetadata::HasCommonAttributes(class UPCGMetadata* InMetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.HasCommonAttributes");
		
		UPCGMetadata_HasCommonAttributes_Params params {};
		params.InMetaData = InMetaData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235EBD0
	 * 		Name   -> Function PCG.PCGMetadata.HasAttribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGMetadata::HasAttribute(const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.HasAttribute");
		
		UPCGMetadata_HasAttribute_Params params {};
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235E6F0
	 * 		Name   -> Function PCG.PCGMetadata.GetAttributes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class FName>                                AttributeNames                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<EPCGMetadataTypes>                          AttributeTypes                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::GetAttributes(TArray<class FName>* AttributeNames, TArray<EPCGMetadataTypes>* AttributeTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.GetAttributes");
		
		UPCGMetadata_GetAttributes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttributeNames != nullptr)
			*AttributeNames = params.AttributeNames;
		if (AttributeTypes != nullptr)
			*AttributeTypes = params.AttributeTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235E600
	 * 		Name   -> Function PCG.PCGMetadata.DeleteAttribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::DeleteAttribute(const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.DeleteAttribute");
		
		UPCGMetadata_DeleteAttribute_Params params {};
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02360140
	 * 		Name   -> Function PCG.PCGMetadata.CreateVectorAttribute
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowsInterpolation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CreateVectorAttribute(const class FName& AttributeName, const struct FVector& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CreateVectorAttribute");
		
		UPCGMetadata_CreateVectorAttribute_Params params {};
		params.AttributeName = AttributeName;
		params.DefaultValue = DefaultValue;
		params.bAllowsInterpolation = bAllowsInterpolation;
		params.bOverrideParent = bOverrideParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235FE50
	 * 		Name   -> Function PCG.PCGMetadata.CreateVector4Attribute
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowsInterpolation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CreateVector4Attribute(const class FName& AttributeName, const struct FVector4& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CreateVector4Attribute");
		
		UPCGMetadata_CreateVector4Attribute_Params params {};
		params.AttributeName = AttributeName;
		params.DefaultValue = DefaultValue;
		params.bAllowsInterpolation = bAllowsInterpolation;
		params.bOverrideParent = bOverrideParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235FB80
	 * 		Name   -> Function PCG.PCGMetadata.CreateVector2Attribute
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowsInterpolation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CreateVector2Attribute(const class FName& AttributeName, const struct FVector2D& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CreateVector2Attribute");
		
		UPCGMetadata_CreateVector2Attribute_Params params {};
		params.AttributeName = AttributeName;
		params.DefaultValue = DefaultValue;
		params.bAllowsInterpolation = bAllowsInterpolation;
		params.bOverrideParent = bOverrideParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235F290
	 * 		Name   -> Function PCG.PCGMetadata.CreateTransformAttribute
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  DefaultValue                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowsInterpolation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CreateTransformAttribute(const class FName& AttributeName, const struct FTransform& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CreateTransformAttribute");
		
		UPCGMetadata_CreateTransformAttribute_Params params {};
		params.AttributeName = AttributeName;
		params.DefaultValue = DefaultValue;
		params.bAllowsInterpolation = bAllowsInterpolation;
		params.bOverrideParent = bOverrideParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235EF90
	 * 		Name   -> Function PCG.PCGMetadata.CreateStringAttribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DefaultValue                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowsInterpolation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CreateStringAttribute(const class FName& AttributeName, const class FString& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CreateStringAttribute");
		
		UPCGMetadata_CreateStringAttribute_Params params {};
		params.AttributeName = AttributeName;
		params.DefaultValue = DefaultValue;
		params.bAllowsInterpolation = bAllowsInterpolation;
		params.bOverrideParent = bOverrideParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235F8B0
	 * 		Name   -> Function PCG.PCGMetadata.CreateRotatorAttribute
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowsInterpolation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CreateRotatorAttribute(const class FName& AttributeName, const struct FRotator& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CreateRotatorAttribute");
		
		UPCGMetadata_CreateRotatorAttribute_Params params {};
		params.AttributeName = AttributeName;
		params.DefaultValue = DefaultValue;
		params.bAllowsInterpolation = bAllowsInterpolation;
		params.bOverrideParent = bOverrideParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235F5E0
	 * 		Name   -> Function PCG.PCGMetadata.CreateQuatAttribute
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       DefaultValue                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowsInterpolation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CreateQuatAttribute(const class FName& AttributeName, const struct FQuat& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CreateQuatAttribute");
		
		UPCGMetadata_CreateQuatAttribute_Params params {};
		params.AttributeName = AttributeName;
		params.DefaultValue = DefaultValue;
		params.bAllowsInterpolation = bAllowsInterpolation;
		params.bOverrideParent = bOverrideParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023609C0
	 * 		Name   -> Function PCG.PCGMetadata.CreateInteger64Attribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowsInterpolation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CreateInteger64Attribute(const class FName& AttributeName, int64_t DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CreateInteger64Attribute");
		
		UPCGMetadata_CreateInteger64Attribute_Params params {};
		params.AttributeName = AttributeName;
		params.DefaultValue = DefaultValue;
		params.bAllowsInterpolation = bAllowsInterpolation;
		params.bOverrideParent = bOverrideParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02360C90
	 * 		Name   -> Function PCG.PCGMetadata.CreateInteger32Attribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowsInterpolation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CreateInteger32Attribute(const class FName& AttributeName, int32_t DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CreateInteger32Attribute");
		
		UPCGMetadata_CreateInteger32Attribute_Params params {};
		params.AttributeName = AttributeName;
		params.DefaultValue = DefaultValue;
		params.bAllowsInterpolation = bAllowsInterpolation;
		params.bOverrideParent = bOverrideParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023606F0
	 * 		Name   -> Function PCG.PCGMetadata.CreateFloatAttribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowsInterpolation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CreateFloatAttribute(const class FName& AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CreateFloatAttribute");
		
		UPCGMetadata_CreateFloatAttribute_Params params {};
		params.AttributeName = AttributeName;
		params.DefaultValue = DefaultValue;
		params.bAllowsInterpolation = bAllowsInterpolation;
		params.bOverrideParent = bOverrideParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02360410
	 * 		Name   -> Function PCG.PCGMetadata.CreateDoubleAttribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowsInterpolation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CreateDoubleAttribute(const class FName& AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CreateDoubleAttribute");
		
		UPCGMetadata_CreateDoubleAttribute_Params params {};
		params.AttributeName = AttributeName;
		params.DefaultValue = DefaultValue;
		params.bAllowsInterpolation = bAllowsInterpolation;
		params.bOverrideParent = bOverrideParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235ECC0
	 * 		Name   -> Function PCG.PCGMetadata.CreateBoolAttribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowsInterpolation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CreateBoolAttribute(const class FName& AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CreateBoolAttribute");
		
		UPCGMetadata_CreateBoolAttribute_Params params {};
		params.AttributeName = AttributeName;
		params.DefaultValue = DefaultValue;
		params.bAllowsInterpolation = bAllowsInterpolation;
		params.bOverrideParent = bOverrideParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235E3E0
	 * 		Name   -> Function PCG.PCGMetadata.CopyExistingAttribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeToCopy                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewAttributeName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeepParent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGMetadata::CopyExistingAttribute(const class FName& AttributeToCopy, const class FName& NewAttributeName, bool bKeepParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CopyExistingAttribute");
		
		UPCGMetadata_CopyExistingAttribute_Params params {};
		params.AttributeToCopy = AttributeToCopy;
		params.NewAttributeName = NewAttributeName;
		params.bKeepParent = bKeepParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023611F0
	 * 		Name   -> Function PCG.PCGMetadata.CopyAttributes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGMetadata*                                InOther                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CopyAttributes(class UPCGMetadata* InOther)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CopyAttributes");
		
		UPCGMetadata_CopyAttributes_Params params {};
		params.InOther = InOther;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02360F60
	 * 		Name   -> Function PCG.PCGMetadata.CopyAttribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGMetadata*                                InOther                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeToCopy                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewAttributeName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::CopyAttribute(class UPCGMetadata* InOther, const class FName& AttributeToCopy, const class FName& NewAttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.CopyAttribute");
		
		UPCGMetadata_CopyAttribute_Params params {};
		params.InOther = InOther;
		params.AttributeToCopy = AttributeToCopy;
		params.NewAttributeName = NewAttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235E070
	 * 		Name   -> Function PCG.PCGMetadata.ClearAttribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AttributeToClear                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::ClearAttribute(const class FName& AttributeToClear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.ClearAttribute");
		
		UPCGMetadata_ClearAttribute_Params params {};
		params.AttributeToClear = AttributeToClear;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235DF80
	 * 		Name   -> Function PCG.PCGMetadata.AddEntry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            ParentEntryKey                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UPCGMetadata::AddEntry(int64_t ParentEntryKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.AddEntry");
		
		UPCGMetadata_AddEntry_Params params {};
		params.ParentEntryKey = ParentEntryKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02361700
	 * 		Name   -> Function PCG.PCGMetadata.AddAttributesFiltered
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGMetadata*                                InOther                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPCGMetadataFilterMode                             InFilterMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::AddAttributesFiltered(class UPCGMetadata* InOther, EPCGMetadataFilterMode InFilterMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.AddAttributesFiltered");
		
		UPCGMetadata_AddAttributesFiltered_Params params {};
		params.InOther = InOther;
		params.InFilterMode = InFilterMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02361CE0
	 * 		Name   -> Function PCG.PCGMetadata.AddAttributes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGMetadata*                                InOther                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::AddAttributes(class UPCGMetadata* InOther)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.AddAttributes");
		
		UPCGMetadata_AddAttributes_Params params {};
		params.InOther = InOther;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02361500
	 * 		Name   -> Function PCG.PCGMetadata.AddAttribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGMetadata*                                InOther                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::AddAttribute(class UPCGMetadata* InOther, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.AddAttribute");
		
		UPCGMetadata_AddAttribute_Params params {};
		params.InOther = InOther;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235D310
	 * 		Name   -> Function PCG.PCGMetadata.AccumulateWeightedAttributesByKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Weight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetNonInterpolableAttributes                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            TargetKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            OutKey                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::AccumulateWeightedAttributesByKey(int64_t Key, class UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64_t TargetKey, int64_t* OutKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.AccumulateWeightedAttributesByKey");
		
		UPCGMetadata_AccumulateWeightedAttributesByKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.Weight = Weight;
		params.bSetNonInterpolableAttributes = bSetNonInterpolableAttributes;
		params.TargetKey = TargetKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKey != nullptr)
			*OutKey = params.OutKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0235B690
	 * 		Name   -> Function PCG.PCGMetadata.AccumulatePointWeightedAttributes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   InPoint                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                InMetaData                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Weight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetNonInterpolableAttributes                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   OutPoint                                                   (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadata::AccumulatePointWeightedAttributes(const struct FPCGPoint& InPoint, class UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, struct FPCGPoint* OutPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadata.AccumulatePointWeightedAttributes");
		
		UPCGMetadata_AccumulatePointWeightedAttributes_Params params {};
		params.InPoint = InPoint;
		params.InMetaData = InMetaData;
		params.Weight = Weight;
		params.bSetNonInterpolableAttributes = bSetNonInterpolableAttributes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoint != nullptr)
			*OutPoint = params.OutPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadata.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadata::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadata");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B8D90
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetVectorAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetVectorAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetVectorAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B2B40
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetVectorAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetVectorAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetVectorAttribute");
		
		UPCGMetadataAccessorHelpers_SetVectorAttribute_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B8850
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetVector4AttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetVector4AttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FVector4& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetVector4AttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B23E0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetVector4Attribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetVector4Attribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FVector4& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetVector4Attribute");
		
		UPCGMetadataAccessorHelpers_SetVector4Attribute_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B8330
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetVector2AttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetVector2AttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FVector2D& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetVector2AttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B1CB0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetVector2Attribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetVector2Attribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FVector2D& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetVector2Attribute");
		
		UPCGMetadataAccessorHelpers_SetVector2Attribute_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B7260
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetTransformAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetTransformAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FTransform& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetTransformAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B0620
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetTransformAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetTransformAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FTransform& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetTransformAttribute");
		
		UPCGMetadataAccessorHelpers_SetTransformAttribute_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B6CB0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetStringAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetStringAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetStringAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023AFE30
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetStringAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetStringAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetStringAttribute");
		
		UPCGMetadataAccessorHelpers_SetStringAttribute_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B7DF0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetRotatorAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetRotatorAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetRotatorAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B1570
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetRotatorAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetRotatorAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetRotatorAttribute");
		
		UPCGMetadataAccessorHelpers_SetRotatorAttribute_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B78B0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetQuatAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetQuatAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FQuat& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetQuatAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B0E30
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetQuatAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetQuatAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FQuat& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetQuatAttribute");
		
		UPCGMetadataAccessorHelpers_SetQuatAttribute_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B9D70
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetInteger64AttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetInteger64AttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, int64_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetInteger64AttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B4160
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetInteger64Attribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetInteger64Attribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, int64_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetInteger64Attribute");
		
		UPCGMetadataAccessorHelpers_SetInteger64Attribute_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023BA2C0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetInteger32AttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetInteger32AttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetInteger32AttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B48D0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetInteger32Attribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetInteger32Attribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetInteger32Attribute");
		
		UPCGMetadataAccessorHelpers_SetInteger32Attribute_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B9820
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetFloatAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetFloatAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetFloatAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B39F0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetFloatAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetFloatAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetFloatAttribute");
		
		UPCGMetadataAccessorHelpers_SetFloatAttribute_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B92D0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetDoubleAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetDoubleAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetDoubleAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B3280
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetDoubleAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetDoubleAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetDoubleAttribute");
		
		UPCGMetadataAccessorHelpers_SetDoubleAttribute_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B6760
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetBoolAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetBoolAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetBoolAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023AF6C0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetBoolAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_SetBoolAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetBoolAttribute");
		
		UPCGMetadataAccessorHelpers_SetBoolAttribute_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B62E0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.SetAttributeFromPropertyByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PropertyName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGMetadataAccessorHelpers::STATIC_SetAttributeFromPropertyByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, class UObject* Object, const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.SetAttributeFromPropertyByMetadataKey");
		
		UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Params params {};
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		params.Object = Object;
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B5040
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.InitializeMetadata
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   ParentPoint                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                ParentMetadata                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_InitializeMetadata(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const struct FPCGPoint& ParentPoint, class UPCGMetadata* ParentMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.InitializeMetadata");
		
		UPCGMetadataAccessorHelpers_InitializeMetadata_Params params {};
		params.MetaData = MetaData;
		params.ParentPoint = ParentPoint;
		params.ParentMetadata = ParentMetadata;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B6090
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.HasAttributeSetByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGMetadataAccessorHelpers::STATIC_HasAttributeSetByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.HasAttributeSetByMetadataKey");
		
		UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023AF360
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.HasAttributeSet
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGMetadataAccessorHelpers::STATIC_HasAttributeSet(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.HasAttributeSet");
		
		UPCGMetadataAccessorHelpers_HasAttributeSet_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B9060
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetVectorAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UPCGMetadataAccessorHelpers::STATIC_GetVectorAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetVectorAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B2F20
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetVectorAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UPCGMetadataAccessorHelpers::STATIC_GetVectorAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetVectorAttribute");
		
		UPCGMetadataAccessorHelpers_GetVectorAttribute_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B8B30
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetVector4AttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 UPCGMetadataAccessorHelpers::STATIC_GetVector4AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetVector4AttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B27D0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetVector4Attribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 UPCGMetadataAccessorHelpers::STATIC_GetVector4Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetVector4Attribute");
		
		UPCGMetadataAccessorHelpers_GetVector4Attribute_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B8600
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetVector2AttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UPCGMetadataAccessorHelpers::STATIC_GetVector2AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetVector2AttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B2090
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetVector2Attribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UPCGMetadataAccessorHelpers::STATIC_GetVector2Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetVector2Attribute");
		
		UPCGMetadataAccessorHelpers_GetVector2Attribute_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B75D0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetTransformAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UPCGMetadataAccessorHelpers::STATIC_GetTransformAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetTransformAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B0A70
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetTransformAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UPCGMetadataAccessorHelpers::STATIC_GetTransformAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetTransformAttribute");
		
		UPCGMetadataAccessorHelpers_GetTransformAttribute_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B6FE0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetStringAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UPCGMetadataAccessorHelpers::STATIC_GetStringAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetStringAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B0270
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetStringAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UPCGMetadataAccessorHelpers::STATIC_GetStringAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetStringAttribute");
		
		UPCGMetadataAccessorHelpers_GetStringAttribute_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B80C0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetRotatorAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator UPCGMetadataAccessorHelpers::STATIC_GetRotatorAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetRotatorAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B1950
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetRotatorAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator UPCGMetadataAccessorHelpers::STATIC_GetRotatorAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetRotatorAttribute");
		
		UPCGMetadataAccessorHelpers_GetRotatorAttribute_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B7B80
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetQuatAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FQuat UPCGMetadataAccessorHelpers::STATIC_GetQuatAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetQuatAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B1210
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetQuatAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FQuat UPCGMetadataAccessorHelpers::STATIC_GetQuatAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetQuatAttribute");
		
		UPCGMetadataAccessorHelpers_GetQuatAttribute_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023BA070
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetInteger64AttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UPCGMetadataAccessorHelpers::STATIC_GetInteger64AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetInteger64AttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B4570
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetInteger64Attribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UPCGMetadataAccessorHelpers::STATIC_GetInteger64Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetInteger64Attribute");
		
		UPCGMetadataAccessorHelpers_GetInteger64Attribute_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023BA5B0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetInteger32AttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPCGMetadataAccessorHelpers::STATIC_GetInteger32AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetInteger32AttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B4CE0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetInteger32Attribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPCGMetadataAccessorHelpers::STATIC_GetInteger32Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetInteger32Attribute");
		
		UPCGMetadataAccessorHelpers_GetInteger32Attribute_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B9B20
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetFloatAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPCGMetadataAccessorHelpers::STATIC_GetFloatAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetFloatAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B3E00
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetFloatAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPCGMetadataAccessorHelpers::STATIC_GetFloatAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetFloatAttribute");
		
		UPCGMetadataAccessorHelpers_GetFloatAttribute_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B95D0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetDoubleAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	double UPCGMetadataAccessorHelpers::STATIC_GetDoubleAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetDoubleAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B3690
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetDoubleAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	double UPCGMetadataAccessorHelpers::STATIC_GetDoubleAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetDoubleAttribute");
		
		UPCGMetadataAccessorHelpers_GetDoubleAttribute_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B6A60
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetBoolAttributeByMetadataKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGMetadataAccessorHelpers::STATIC_GetBoolAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetBoolAttributeByMetadataKey");
		
		UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Params params {};
		params.Key = Key;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023AFAD0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.GetBoolAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                MetaData                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGMetadataAccessorHelpers::STATIC_GetBoolAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.GetBoolAttribute");
		
		UPCGMetadataAccessorHelpers_GetBoolAttribute_Params params {};
		params.Point = Point;
		params.MetaData = MetaData;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023B57E0
	 * 		Name   -> Function PCG.PCGMetadataAccessorHelpers.CopyPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGPoint                                   InPoint                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPCGPoint                                   OutPoint                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCopyMetadata                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                InMetaData                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGMetadata*                                OutMetadata                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGMetadataAccessorHelpers::STATIC_CopyPoint(const struct FPCGPoint& InPoint, struct FPCGPoint* OutPoint, bool bCopyMetadata, class UPCGMetadata* InMetaData, class UPCGMetadata* OutMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGMetadataAccessorHelpers.CopyPoint");
		
		UPCGMetadataAccessorHelpers_CopyPoint_Params params {};
		params.InPoint = InPoint;
		params.bCopyMetadata = bCopyMetadata;
		params.InMetaData = InMetaData;
		params.OutMetadata = OutMetadata;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoint != nullptr)
			*OutPoint = params.OutPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGMetadataAccessorHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMetadataAccessorHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGMetadataAccessorHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023BF340
	 * 		Name   -> Function PCG.PCGComponent.SetGraph
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGGraphInterface*                          InGraph                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGComponent::SetGraph(class UPCGGraphInterface* InGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGComponent.SetGraph");
		
		UPCGComponent_SetGraph_Params params {};
		params.InGraph = InGraph;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012EBCE0
	 * 		Name   -> Function PCG.PCGComponent.NotifyPropertiesChangedFromBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPCGComponent::NotifyPropertiesChangedFromBlueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGComponent.NotifyPropertiesChangedFromBlueprint");
		
		UPCGComponent_NotifyPropertiesChangedFromBlueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023BEC90
	 * 		Name   -> Function PCG.PCGComponent.GetGeneratedGraphOutput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FPCGDataCollection UPCGComponent::GetGeneratedGraphOutput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGComponent.GetGeneratedGraphOutput");
		
		UPCGComponent_GetGeneratedGraphOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023BF100
	 * 		Name   -> Function PCG.PCGComponent.GenerateLocal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGComponent::GenerateLocal(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGComponent.GenerateLocal");
		
		UPCGComponent_GenerateLocal_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023BEE50
	 * 		Name   -> Function PCG.PCGComponent.Generate
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGComponent::Generate(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGComponent.Generate");
		
		UPCGComponent_Generate_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023BEBA0
	 * 		Name   -> Function PCG.PCGComponent.ClearPCGLink
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      TemplateActor                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UPCGComponent::ClearPCGLink(class UClass* TemplateActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGComponent.ClearPCGLink");
		
		UPCGComponent_ClearPCGLink_Params params {};
		params.TemplateActor = TemplateActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023BEF40
	 * 		Name   -> Function PCG.PCGComponent.CleanupLocal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bRemoveComponents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSave                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGComponent::CleanupLocal(bool bRemoveComponents, bool bSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGComponent.CleanupLocal");
		
		UPCGComponent_CleanupLocal_Params params {};
		params.bRemoveComponents = bRemoveComponents;
		params.bSave = bSave;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023BECC0
	 * 		Name   -> Function PCG.PCGComponent.Cleanup
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bRemoveComponents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSave                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGComponent::Cleanup(bool bRemoveComponents, bool bSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGComponent.Cleanup");
		
		UPCGComponent_Cleanup_Params params {};
		params.bRemoveComponents = bRemoveComponents;
		params.bSave = bSave;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023BF210
	 * 		Name   -> Function PCG.PCGComponent.AddToManagedResources
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGManagedResource*                         InResource                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGComponent::AddToManagedResources(class UPCGManagedResource* InResource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGComponent.AddToManagedResources");
		
		UPCGComponent_AddToManagedResources_Params params {};
		params.InResource = InResource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023C5EC0
	 * 		Name   -> Function PCG.PCGDataFunctionLibrary.GetTaggedParams
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGDataCollection                          InCollection                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InTag                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPCGTaggedData> UPCGDataFunctionLibrary::STATIC_GetTaggedParams(const struct FPCGDataCollection& InCollection, const class FString& InTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGDataFunctionLibrary.GetTaggedParams");
		
		UPCGDataFunctionLibrary_GetTaggedParams_Params params {};
		params.InCollection = InCollection;
		params.InTag = InTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023C6690
	 * 		Name   -> Function PCG.PCGDataFunctionLibrary.GetTaggedInputs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGDataCollection                          InCollection                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InTag                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPCGTaggedData> UPCGDataFunctionLibrary::STATIC_GetTaggedInputs(const struct FPCGDataCollection& InCollection, const class FString& InTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGDataFunctionLibrary.GetTaggedInputs");
		
		UPCGDataFunctionLibrary_GetTaggedInputs_Params params {};
		params.InCollection = InCollection;
		params.InTag = InTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023C61C0
	 * 		Name   -> Function PCG.PCGDataFunctionLibrary.GetParamsByPin
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGDataCollection                          InCollection                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        InPinLabel                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPCGTaggedData> UPCGDataFunctionLibrary::STATIC_GetParamsByPin(const struct FPCGDataCollection& InCollection, const class FName& InPinLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGDataFunctionLibrary.GetParamsByPin");
		
		UPCGDataFunctionLibrary_GetParamsByPin_Params params {};
		params.InCollection = InCollection;
		params.InPinLabel = InPinLabel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023C6410
	 * 		Name   -> Function PCG.PCGDataFunctionLibrary.GetParams
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGDataCollection                          InCollection                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPCGTaggedData> UPCGDataFunctionLibrary::STATIC_GetParams(const struct FPCGDataCollection& InCollection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGDataFunctionLibrary.GetParams");
		
		UPCGDataFunctionLibrary_GetParams_Params params {};
		params.InCollection = InCollection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023C6990
	 * 		Name   -> Function PCG.PCGDataFunctionLibrary.GetInputsByPin
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGDataCollection                          InCollection                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        InPinLabel                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPCGTaggedData> UPCGDataFunctionLibrary::STATIC_GetInputsByPin(const struct FPCGDataCollection& InCollection, const class FName& InPinLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGDataFunctionLibrary.GetInputsByPin");
		
		UPCGDataFunctionLibrary_GetInputsByPin_Params params {};
		params.InCollection = InCollection;
		params.InPinLabel = InPinLabel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023C6C80
	 * 		Name   -> Function PCG.PCGDataFunctionLibrary.GetInputs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGDataCollection                          InCollection                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPCGTaggedData> UPCGDataFunctionLibrary::STATIC_GetInputs(const struct FPCGDataCollection& InCollection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGDataFunctionLibrary.GetInputs");
		
		UPCGDataFunctionLibrary_GetInputs_Params params {};
		params.InCollection = InCollection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023C5D30
	 * 		Name   -> Function PCG.PCGDataFunctionLibrary.GetAllSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPCGDataCollection                          InCollection                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPCGTaggedData> UPCGDataFunctionLibrary::STATIC_GetAllSettings(const struct FPCGDataCollection& InCollection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGDataFunctionLibrary.GetAllSettings");
		
		UPCGDataFunctionLibrary_GetAllSettings_Params params {};
		params.InCollection = InCollection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGDataFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGDataFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGDataFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGEdge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGEdge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGEdge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023C98E0
	 * 		Name   -> Function PCG.PCGGraphInterface.GetMutablePCGGraph
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UPCGGraph* UPCGGraphInterface::GetMutablePCGGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGGraphInterface.GetMutablePCGGraph");
		
		UPCGGraphInterface_GetMutablePCGGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023C98B0
	 * 		Name   -> Function PCG.PCGGraphInterface.GetConstPCGGraph
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPCGGraph* UPCGGraphInterface::GetConstPCGGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGGraphInterface.GetConstPCGGraph");
		
		UPCGGraphInterface_GetConstPCGGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGGraphInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGGraphInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGGraphInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023CA1C0
	 * 		Name   -> Function PCG.PCGGraph.RemoveNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGNode*                                    InNode                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPCGGraph::RemoveNode(class UPCGNode* InNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGGraph.RemoveNode");
		
		UPCGGraph_RemoveNode_Params params {};
		params.InNode = InNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023C9B00
	 * 		Name   -> Function PCG.PCGGraph.RemoveEdge
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGNode*                                    From                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FromLabel                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGNode*                                    To                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ToLabel                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPCGGraph::RemoveEdge(class UPCGNode* From, const class FName& FromLabel, class UPCGNode* To, const class FName& ToLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGGraph.RemoveEdge");
		
		UPCGGraph_RemoveEdge_Params params {};
		params.From = From;
		params.FromLabel = FromLabel;
		params.To = To;
		params.ToLabel = ToLabel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021729C0
	 * 		Name   -> Function PCG.PCGGraph.GetOutputNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPCGNode* UPCGGraph::GetOutputNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGGraph.GetOutputNode");
		
		UPCGGraph_GetOutputNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021729A0
	 * 		Name   -> Function PCG.PCGGraph.GetInputNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPCGNode* UPCGGraph::GetInputNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGGraph.GetInputNode");
		
		UPCGGraph_GetInputNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023CA770
	 * 		Name   -> Function PCG.PCGGraph.AddNodeOfType
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InSettingsClass                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGSettings*                                DefaultNodeSettings                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGNode* UPCGGraph::AddNodeOfType(class UClass* InSettingsClass, class UPCGSettings** DefaultNodeSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGGraph.AddNodeOfType");
		
		UPCGGraph_AddNodeOfType_Params params {};
		params.InSettingsClass = InSettingsClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DefaultNodeSettings != nullptr)
			*DefaultNodeSettings = params.DefaultNodeSettings;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023CA5A0
	 * 		Name   -> Function PCG.PCGGraph.AddNodeInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGSettings*                                InSettings                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGNode* UPCGGraph::AddNodeInstance(class UPCGSettings* InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGGraph.AddNodeInstance");
		
		UPCGGraph_AddNodeInstance_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023CA3B0
	 * 		Name   -> Function PCG.PCGGraph.AddNodeCopy
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGSettings*                                InSettings                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGSettings*                                DefaultNodeSettings                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGNode* UPCGGraph::AddNodeCopy(class UPCGSettings* InSettings, class UPCGSettings** DefaultNodeSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGGraph.AddNodeCopy");
		
		UPCGGraph_AddNodeCopy_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DefaultNodeSettings != nullptr)
			*DefaultNodeSettings = params.DefaultNodeSettings;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023C9E70
	 * 		Name   -> Function PCG.PCGGraph.AddEdge
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UPCGNode*                                    From                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FromPinLabel                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPCGNode*                                    To                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ToPinLabel                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGNode* UPCGGraph::AddEdge(class UPCGNode* From, const class FName& FromPinLabel, class UPCGNode* To, const class FName& ToPinLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGGraph.AddEdge");
		
		UPCGGraph_AddEdge_Params params {};
		params.From = From;
		params.FromPinLabel = FromPinLabel;
		params.To = To;
		params.ToPinLabel = ToPinLabel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGGraphInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGGraphInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGGraphInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGGraphInputOutputSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGGraphInputOutputSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGGraphInputOutputSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGManagedResource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGManagedResource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGManagedResource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGManagedActors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGManagedActors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGManagedActors");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGManagedComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGManagedComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGManagedComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGManagedISMComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGManagedISMComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGManagedISMComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023D0870
	 * 		Name   -> Function PCG.PCGParamData.MutableMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UPCGMetadata* UPCGParamData::MutableMetadata()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGParamData.MutableMetadata");
		
		UPCGParamData_MutableMetadata_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023D05B0
	 * 		Name   -> Function PCG.PCGParamData.FindOrAddMetadataKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UPCGParamData::FindOrAddMetadataKey(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGParamData.FindOrAddMetadataKey");
		
		UPCGParamData_FindOrAddMetadataKey_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023D0770
	 * 		Name   -> Function PCG.PCGParamData.FindMetadataKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        InName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UPCGParamData::FindMetadataKey(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGParamData.FindMetadataKey");
		
		UPCGParamData_FindMetadataKey_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023D0480
	 * 		Name   -> Function PCG.PCGParamData.FilterParamsByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        InName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGParamData* UPCGParamData::FilterParamsByName(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGParamData.FilterParamsByName");
		
		UPCGParamData_FilterParamsByName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023D0360
	 * 		Name   -> Function PCG.PCGParamData.FilterParamsByKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int64_t                                            InKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPCGParamData* UPCGParamData::FilterParamsByKey(int64_t InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGParamData.FilterParamsByKey");
		
		UPCGParamData_FilterParamsByKey_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023D0870
	 * 		Name   -> Function PCG.PCGParamData.ConstMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPCGMetadata* UPCGParamData::ConstMetadata()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGParamData.ConstMetadata");
		
		UPCGParamData_ConstMetadata_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGParamData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGParamData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGParamData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023D1F40
	 * 		Name   -> Function PCG.PCGPin.SetToolTip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        InTooltip                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPCGPin::SetToolTip(const class FText& InTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGPin.SetToolTip");
		
		UPCGPin_SetToolTip_Params params {};
		params.InTooltip = InTooltip;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023D2060
	 * 		Name   -> Function PCG.PCGPin.GetTooltip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UPCGPin::GetTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGPin.GetTooltip");
		
		UPCGPin_GetTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGPin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGPin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGPin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSettingsInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSettingsInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSettingsInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGTrivialSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGTrivialSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGTrivialSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSubgraphSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSubgraphSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSubgraphSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSubgraphNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSubgraphNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSubgraphNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APCGVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APCGVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APCGWorldActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APCGWorldActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGWorldActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023DF990
	 * 		Name   -> Function PCG.PCGDeterminismTestBlueprintBase.ExecuteTest
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UPCGNode*                                    InPCGNode                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeterminismTestResult                      InOutTestResult                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPCGDeterminismTestBlueprintBase::ExecuteTest(class UPCGNode* InPCGNode, struct FDeterminismTestResult* InOutTestResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PCG.PCGDeterminismTestBlueprintBase.ExecuteTest");
		
		UPCGDeterminismTestBlueprintBase_ExecuteTest_Params params {};
		params.InPCGNode = InPCGNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOutTestResult != nullptr)
			*InOutTestResult = params.InOutTestResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGDeterminismTestBlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGDeterminismTestBlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGDeterminismTestBlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APCGUnitTestDummyActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APCGUnitTestDummyActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGUnitTestDummyActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPCGUnitTestDummyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGUnitTestDummyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCG.PCGUnitTestDummyComponent");
		return ptr;
	}

}


