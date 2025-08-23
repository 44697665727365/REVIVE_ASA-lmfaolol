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
	 * 		RVA    -> 0x023F6260
	 * 		Name   -> Function MeshModelingToolsExp.BakeInputMeshProperties.GetTargetUVLayerNamesFunc
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> UBakeInputMeshProperties::GetTargetUVLayerNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.BakeInputMeshProperties.GetTargetUVLayerNamesFunc");
		
		UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023F6230
	 * 		Name   -> Function MeshModelingToolsExp.BakeInputMeshProperties.GetSourceUVLayerNamesFunc
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> UBakeInputMeshProperties::GetSourceUVLayerNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.BakeInputMeshProperties.GetSourceUVLayerNamesFunc");
		
		UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeInputMeshProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeInputMeshProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeInputMeshProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeNormalMapToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeNormalMapToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeNormalMapToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeOcclusionMapToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeOcclusionMapToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeOcclusionMapToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeCurvatureMapToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeCurvatureMapToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeCurvatureMapToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x018CEA60
	 * 		Name   -> Function MeshModelingToolsExp.BakeTexture2DProperties.GetUVLayerNamesFunc
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> UBakeTexture2DProperties::GetUVLayerNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.BakeTexture2DProperties.GetUVLayerNamesFunc");
		
		UBakeTexture2DProperties_GetUVLayerNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeTexture2DProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeTexture2DProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeTexture2DProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0183FBA0
	 * 		Name   -> Function MeshModelingToolsExp.BakeMultiTexture2DProperties.GetUVLayerNamesFunc
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> UBakeMultiTexture2DProperties::GetUVLayerNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.BakeMultiTexture2DProperties.GetUVLayerNamesFunc");
		
		UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMultiTexture2DProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMultiTexture2DProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMultiTexture2DProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeVisualizationProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeVisualizationProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeVisualizationProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExtrudeMeshSelectionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtrudeMeshSelectionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ExtrudeMeshSelectionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExtrudeMeshSelectionToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtrudeMeshSelectionToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ExtrudeMeshSelectionToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExtrudeMeshSelectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtrudeMeshSelectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ExtrudeMeshSelectionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSculptBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSculptBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSculptBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BaseKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScaleKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScaleKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ScaleKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPullKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPullKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PullKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USharpPullKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USharpPullKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SharpPullKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTwistKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwistKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.TwistKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupEraseBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupEraseBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.GroupEraseBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupPaintBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupPaintBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.GroupPaintBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInflateBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInflateBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.InflateBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoveBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MoveBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPinchBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPinchBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PinchBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasePlaneBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePlaneBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BasePlaneBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PlaneBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UViewAlignedPlaneBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UViewAlignedPlaneBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ViewAlignedPlaneBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFixedPlaneBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedPlaneBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.FixedPlaneBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStandardSculptBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandardSculptBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.StandardSculptBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UViewAlignedSculptBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UViewAlignedSculptBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ViewAlignedSculptBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USculptMaxBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USculptMaxBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SculptMaxBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseSmoothBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseSmoothBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BaseSmoothBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SmoothBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecondarySmoothBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecondarySmoothBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SecondarySmoothBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothFillBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothFillBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SmoothFillBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlattenBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlattenBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.FlattenBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEraseBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEraseBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.EraseBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOffsetMeshSelectionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetMeshSelectionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.OffsetMeshSelectionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOffsetMeshSelectionToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetMeshSelectionToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.OffsetMeshSelectionToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOffsetMeshSelectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetMeshSelectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.OffsetMeshSelectionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatternToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PatternToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatternToolSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternToolSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PatternToolSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatternTool_BoundingBoxSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternTool_BoundingBoxSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PatternTool_BoundingBoxSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatternTool_LinearSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternTool_LinearSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PatternTool_LinearSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatternTool_GridSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternTool_GridSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PatternTool_GridSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatternTool_RadialSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternTool_RadialSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PatternTool_RadialSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatternTool_RotationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternTool_RotationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PatternTool_RotationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatternTool_TranslationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternTool_TranslationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PatternTool_TranslationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatternTool_ScaleSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternTool_ScaleSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PatternTool_ScaleSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatternTool_OutputSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternTool_OutputSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PatternTool_OutputSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatternTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PatternTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshConstraintProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshConstraintProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshConstraintProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemeshProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RemeshProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddPatchToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPatchToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.AddPatchToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddPatchToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPatchToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.AddPatchToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddPatchTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPatchTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.AddPatchTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlignObjectsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlignObjectsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.AlignObjectsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlignObjectsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlignObjectsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.AlignObjectsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlignObjectsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlignObjectsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.AlignObjectsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMeshAttributeMapsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeMapsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMeshAttributeMapsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02400850
	 * 		Name   -> Function MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
	 * 		Flags  -> (Final, Native, Public)
	 */
	TArray<class FString> UBakeMeshAttributeMapsToolProperties::GetMapPreviewNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc");
		
		UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMeshAttributeMapsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeMapsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMeshAttributeTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMeshAttributeTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMeshAttributeMapsToolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeMapsToolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMeshAttributeMapsToolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMeshAttributeMapsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeMapsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMeshAttributeMapsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMeshAttributeMapsResultToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeMapsResultToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMeshAttributeMapsResultToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMeshAttributeVertexToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeVertexToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMeshAttributeVertexToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMeshAttributeVertexToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeVertexToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMeshAttributeVertexToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMeshAttributeVertexTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeVertexTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMeshAttributeVertexTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMultiMeshAttributeMapsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMultiMeshAttributeMapsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02400850
	 * 		Name   -> Function MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
	 * 		Flags  -> (Final, Native, Public)
	 */
	TArray<class FString> UBakeMultiMeshAttributeMapsToolProperties::GetMapPreviewNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc");
		
		UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMultiMeshAttributeMapsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMultiMeshAttributeMapsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02414D30
	 * 		Name   -> Function MeshModelingToolsExp.BakeMultiMeshInputToolProperties.GetTargetUVLayerNamesFunc
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> UBakeMultiMeshInputToolProperties::GetTargetUVLayerNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.BakeMultiMeshInputToolProperties.GetTargetUVLayerNamesFunc");
		
		UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMultiMeshInputToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMultiMeshInputToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMultiMeshInputToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMultiMeshAttributeMapsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMultiMeshAttributeMapsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeRenderCaptureResults.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeRenderCaptureResults::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeRenderCaptureResults");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeRenderCaptureToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeRenderCaptureToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeRenderCaptureToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URenderCaptureProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URenderCaptureProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RenderCaptureProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x018404A0
	 * 		Name   -> Function MeshModelingToolsExp.BakeRenderCaptureToolProperties.GetMapPreviewNamesFunc
	 * 		Flags  -> (Final, Native, Public)
	 */
	TArray<class FString> UBakeRenderCaptureToolProperties::GetMapPreviewNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.BakeRenderCaptureToolProperties.GetMapPreviewNamesFunc");
		
		UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeRenderCaptureToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeRenderCaptureToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeRenderCaptureToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x018CEA60
	 * 		Name   -> Function MeshModelingToolsExp.BakeRenderCaptureInputToolProperties.GetTargetUVLayerNamesFunc
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> UBakeRenderCaptureInputToolProperties::GetTargetUVLayerNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.BakeRenderCaptureInputToolProperties.GetTargetUVLayerNamesFunc");
		
		UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024192C0
	 * 		Name   -> Function MeshModelingToolsExp.BakeRenderCaptureInputToolProperties.GetTargetUVLayerIndex
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	int32_t UBakeRenderCaptureInputToolProperties::GetTargetUVLayerIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.BakeRenderCaptureInputToolProperties.GetTargetUVLayerIndex");
		
		UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeRenderCaptureInputToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeRenderCaptureInputToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeRenderCaptureInputToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeRenderCaptureVisualizationProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeRenderCaptureVisualizationProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeRenderCaptureVisualizationProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeRenderCaptureTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeRenderCaptureTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeRenderCaptureTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeTransformToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeTransformToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeTransformToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeTransformToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeTransformToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeTransformToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeTransformTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeTransformTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BakeTransformTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvertMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ConvertMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvertMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ConvertMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvertMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ConvertMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvertToPolygonsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertToPolygonsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ConvertToPolygonsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvertToPolygonsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertToPolygonsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ConvertToPolygonsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x018CF940
	 * 		Name   -> Function MeshModelingToolsExp.OutputPolygroupLayerProperties.GetGroupOptionsList
	 * 		Flags  -> (Final, Native, Public)
	 */
	TArray<class FString> UOutputPolygroupLayerProperties::GetGroupOptionsList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.OutputPolygroupLayerProperties.GetGroupOptionsList");
		
		UOutputPolygroupLayerProperties_GetGroupOptionsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOutputPolygroupLayerProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOutputPolygroupLayerProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.OutputPolygroupLayerProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvertToPolygonsOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertToPolygonsOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ConvertToPolygonsOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvertToPolygonsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertToPolygonsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ConvertToPolygonsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCubeGridToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCubeGridToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.CubeGridToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCubeGridToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCubeGridToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.CubeGridToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02430920
	 * 		Name   -> Function MeshModelingToolsExp.CubeGridToolActions.SlideForward
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCubeGridToolActions::SlideForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.CubeGridToolActions.SlideForward");
		
		UCubeGridToolActions_SlideForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02430940
	 * 		Name   -> Function MeshModelingToolsExp.CubeGridToolActions.SlideBack
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCubeGridToolActions::SlideBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.CubeGridToolActions.SlideBack");
		
		UCubeGridToolActions_SlideBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024308C0
	 * 		Name   -> Function MeshModelingToolsExp.CubeGridToolActions.ResetGridFromActor
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCubeGridToolActions::ResetGridFromActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.CubeGridToolActions.ResetGridFromActor");
		
		UCubeGridToolActions_ResetGridFromActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02430960
	 * 		Name   -> Function MeshModelingToolsExp.CubeGridToolActions.Push
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCubeGridToolActions::Push()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.CubeGridToolActions.Push");
		
		UCubeGridToolActions_Push_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02430980
	 * 		Name   -> Function MeshModelingToolsExp.CubeGridToolActions.Pull
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCubeGridToolActions::Pull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.CubeGridToolActions.Pull");
		
		UCubeGridToolActions_Pull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024308E0
	 * 		Name   -> Function MeshModelingToolsExp.CubeGridToolActions.Flip
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCubeGridToolActions::Flip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.CubeGridToolActions.Flip");
		
		UCubeGridToolActions_Flip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02430900
	 * 		Name   -> Function MeshModelingToolsExp.CubeGridToolActions.CornerMode
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCubeGridToolActions::CornerMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.CubeGridToolActions.CornerMode");
		
		UCubeGridToolActions_CornerMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCubeGridToolActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCubeGridToolActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.CubeGridToolActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02430B80
	 * 		Name   -> Function MeshModelingToolsExp.CubeGridDuringActivityActions.Done
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCubeGridDuringActivityActions::Done()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.CubeGridDuringActivityActions.Done");
		
		UCubeGridDuringActivityActions_Done_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02430B60
	 * 		Name   -> Function MeshModelingToolsExp.CubeGridDuringActivityActions.Cancel
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCubeGridDuringActivityActions::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.CubeGridDuringActivityActions.Cancel");
		
		UCubeGridDuringActivityActions_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCubeGridDuringActivityActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCubeGridDuringActivityActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.CubeGridDuringActivityActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCubeGridTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCubeGridTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.CubeGridTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeformMeshPolygonsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeformMeshPolygonsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DeformMeshPolygonsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeformMeshPolygonsTransformProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeformMeshPolygonsTransformProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DeformMeshPolygonsTransformProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeformMeshPolygonsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeformMeshPolygonsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DeformMeshPolygonsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0244E3A0
	 * 		Name   -> Function MeshModelingToolsExp.DisplaceMeshCommonProperties.GetWeightMapsFunc
	 * 		Flags  -> (Final, Native, Public)
	 */
	TArray<class FString> UDisplaceMeshCommonProperties::GetWeightMapsFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.DisplaceMeshCommonProperties.GetWeightMapsFunc");
		
		UDisplaceMeshCommonProperties_GetWeightMapsFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshCommonProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshCommonProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DisplaceMeshCommonProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0244E630
	 * 		Name   -> Function MeshModelingToolsExp.SelectiveTessellationProperties.GetMaterialIDsFunc
	 * 		Flags  -> (Final, Native, Public)
	 */
	TArray<class FString> USelectiveTessellationProperties::GetMaterialIDsFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.SelectiveTessellationProperties.GetMaterialIDsFunc");
		
		USelectiveTessellationProperties_GetMaterialIDsFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelectiveTessellationProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectiveTessellationProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SelectiveTessellationProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshTextureMapProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshTextureMapProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DisplaceMeshTextureMapProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshDirectionalFilterProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshDirectionalFilterProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DisplaceMeshDirectionalFilterProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshPerlinNoiseProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshPerlinNoiseProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DisplaceMeshPerlinNoiseProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshSineWaveProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshSineWaveProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DisplaceMeshSineWaveProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DisplaceMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DisplaceMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolyPathToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolyPathToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DrawPolyPathToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolyPathProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolyPathProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DrawPolyPathProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolyPathExtrudeProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolyPathExtrudeProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DrawPolyPathExtrudeProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolyPathTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolyPathTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DrawPolyPathTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshBrushTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshBrushTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DynamicMeshBrushTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshSculptToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshSculptToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DynamicMeshSculptToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DynamicMeshBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshBrushSculptProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshBrushSculptProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DynamicMeshBrushSculptProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02459900
	 * 		Name   -> Function MeshModelingToolsExp.DynamicSculptToolActions.DiscardAttributes
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDynamicSculptToolActions::DiscardAttributes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.DynamicSculptToolActions.DiscardAttributes");
		
		UDynamicSculptToolActions_DiscardAttributes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicSculptToolActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicSculptToolActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DynamicSculptToolActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrushRemeshProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrushRemeshProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.BrushRemeshProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFixedPlaneBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedPlaneBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.FixedPlaneBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshSculptTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshSculptTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DynamicMeshSculptTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditNormalsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.EditNormalsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditNormalsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.EditNormalsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditNormalsAdvancedProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsAdvancedProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.EditNormalsAdvancedProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditNormalsOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.EditNormalsOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditNormalsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.EditNormalsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditPivotToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditPivotToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.EditPivotToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditPivotToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditPivotToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.EditPivotToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0246D550
	 * 		Name   -> Function MeshModelingToolsExp.EditPivotToolActionPropertySet.WorldOrigin
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::WorldOrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.EditPivotToolActionPropertySet.WorldOrigin");
		
		UEditPivotToolActionPropertySet_WorldOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0246D5F0
	 * 		Name   -> Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Top
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Top()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Top");
		
		UEditPivotToolActionPropertySet_Top_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0246D5B0
	 * 		Name   -> Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Right
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Right");
		
		UEditPivotToolActionPropertySet_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0246D5D0
	 * 		Name   -> Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Left
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Left");
		
		UEditPivotToolActionPropertySet_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0246D590
	 * 		Name   -> Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Front
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Front()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Front");
		
		UEditPivotToolActionPropertySet_Front_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0246D630
	 * 		Name   -> Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Center
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Center()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Center");
		
		UEditPivotToolActionPropertySet_Center_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0246D610
	 * 		Name   -> Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Bottom
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Bottom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Bottom");
		
		UEditPivotToolActionPropertySet_Bottom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0246D570
	 * 		Name   -> Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Back
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Back");
		
		UEditPivotToolActionPropertySet_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditPivotToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditPivotToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.EditPivotToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditPivotTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditPivotTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.EditPivotTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditUVIslandsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditUVIslandsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.EditUVIslandsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditUVIslandsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditUVIslandsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.EditUVIslandsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoleFillToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.HoleFillToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothHoleFillProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothHoleFillProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SmoothHoleFillProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoleFillToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.HoleFillToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02482C50
	 * 		Name   -> Function MeshModelingToolsExp.HoleFillToolActions.SelectAll
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UHoleFillToolActions::SelectAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.HoleFillToolActions.SelectAll");
		
		UHoleFillToolActions_SelectAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02482C30
	 * 		Name   -> Function MeshModelingToolsExp.HoleFillToolActions.Clear
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UHoleFillToolActions::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.HoleFillToolActions.Clear");
		
		UHoleFillToolActions_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoleFillToolActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillToolActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.HoleFillToolActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoleFillStatisticsProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillStatisticsProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.HoleFillStatisticsProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoleFillOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.HoleFillOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoleFillTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.HoleFillTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULatticeDeformerToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULatticeDeformerToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.LatticeDeformerToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024869E0
	 * 		Name   -> Function MeshModelingToolsExp.LatticeDeformerToolProperties.Constrain
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ULatticeDeformerToolProperties::Constrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.LatticeDeformerToolProperties.Constrain");
		
		ULatticeDeformerToolProperties_Constrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024869C0
	 * 		Name   -> Function MeshModelingToolsExp.LatticeDeformerToolProperties.ClearConstraints
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ULatticeDeformerToolProperties::ClearConstraints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.LatticeDeformerToolProperties.ClearConstraints");
		
		ULatticeDeformerToolProperties_ClearConstraints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULatticeDeformerToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULatticeDeformerToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.LatticeDeformerToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULatticeDeformerOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULatticeDeformerOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.LatticeDeformerOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULatticeDeformerTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULatticeDeformerTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.LatticeDeformerTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshAttributePaintToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshAttributePaintToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshAttributePaintBrushOperationProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintBrushOperationProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshAttributePaintBrushOperationProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x018404A0
	 * 		Name   -> Function MeshModelingToolsExp.MeshAttributePaintToolProperties.GetAttributeNames
	 * 		Flags  -> (Final, Native, Public)
	 */
	TArray<class FString> UMeshAttributePaintToolProperties::GetAttributeNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshAttributePaintToolProperties.GetAttributeNames");
		
		UMeshAttributePaintToolProperties_GetAttributeNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshAttributePaintToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshAttributePaintToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshAttributePaintEditActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintEditActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshAttributePaintEditActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshAttributePaintTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshAttributePaintTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshBoundaryToolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshBoundaryToolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshBoundaryToolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshGroupPaintToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshGroupPaintToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshGroupPaintToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupPaintBrushFilterProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupPaintBrushFilterProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.GroupPaintBrushFilterProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshGroupPaintToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshGroupPaintToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshGroupPaintToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02491E90
	 * 		Name   -> Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.UnfreezeAll
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshGroupPaintToolFreezeActions::UnfreezeAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.UnfreezeAll");
		
		UMeshGroupPaintToolFreezeActions_UnfreezeAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02491DB0
	 * 		Name   -> Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ShrinkCurrent
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshGroupPaintToolFreezeActions::ShrinkCurrent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ShrinkCurrent");
		
		UMeshGroupPaintToolFreezeActions_ShrinkCurrent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02491DD0
	 * 		Name   -> Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.GrowCurrent
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshGroupPaintToolFreezeActions::GrowCurrent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.GrowCurrent");
		
		UMeshGroupPaintToolFreezeActions_GrowCurrent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02491E50
	 * 		Name   -> Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeOthers
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshGroupPaintToolFreezeActions::FreezeOthers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeOthers");
		
		UMeshGroupPaintToolFreezeActions_FreezeOthers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02491E70
	 * 		Name   -> Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeCurrent
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshGroupPaintToolFreezeActions::FreezeCurrent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeCurrent");
		
		UMeshGroupPaintToolFreezeActions_FreezeCurrent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02491DF0
	 * 		Name   -> Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FloodFillCurrent
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshGroupPaintToolFreezeActions::FloodFillCurrent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FloodFillCurrent");
		
		UMeshGroupPaintToolFreezeActions_FloodFillCurrent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02491E10
	 * 		Name   -> Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearCurrent
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshGroupPaintToolFreezeActions::ClearCurrent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearCurrent");
		
		UMeshGroupPaintToolFreezeActions_ClearCurrent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02491E30
	 * 		Name   -> Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearAll
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshGroupPaintToolFreezeActions::ClearAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearAll");
		
		UMeshGroupPaintToolFreezeActions_ClearAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshGroupPaintToolFreezeActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshGroupPaintToolFreezeActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshGroupPaintToolFreezeActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSculptToolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSculptToolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSculptToolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshGroupPaintTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshGroupPaintTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshGroupPaintTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshInspectorToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshInspectorToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshInspectorToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshInspectorProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshInspectorProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshInspectorProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0183FBA0
	 * 		Name   -> Function MeshModelingToolsExp.MeshInspectorMaterialProperties.GetUVChannelNamesFunc
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> UMeshInspectorMaterialProperties::GetUVChannelNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshInspectorMaterialProperties.GetUVChannelNamesFunc");
		
		UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshInspectorMaterialProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshInspectorMaterialProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshInspectorMaterialProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshInspectorTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshInspectorTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshInspectorTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSelectionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSelectionToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3AE0
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionEditActions.Shrink
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::Shrink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionEditActions.Shrink");
		
		UMeshSelectionEditActions_Shrink_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3B40
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionEditActions.SelectAll
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::SelectAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionEditActions.SelectAll");
		
		UMeshSelectionEditActions_SelectAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3A60
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionEditActions.OptimizeBorder
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::OptimizeBorder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionEditActions.OptimizeBorder");
		
		UMeshSelectionEditActions_OptimizeBorder_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3AA0
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionEditActions.LargestTriCountPart
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::LargestTriCountPart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionEditActions.LargestTriCountPart");
		
		UMeshSelectionEditActions_LargestTriCountPart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3A80
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionEditActions.LargestAreaPart
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::LargestAreaPart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionEditActions.LargestAreaPart");
		
		UMeshSelectionEditActions_LargestAreaPart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3B20
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionEditActions.Invert
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::Invert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionEditActions.Invert");
		
		UMeshSelectionEditActions_Invert_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3B00
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionEditActions.Grow
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::Grow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionEditActions.Grow");
		
		UMeshSelectionEditActions_Grow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3AC0
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionEditActions.FloodFill
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::FloodFill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionEditActions.FloodFill");
		
		UMeshSelectionEditActions_FloodFill_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3A40
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionEditActions.ExpandToMaterials
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::ExpandToMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionEditActions.ExpandToMaterials");
		
		UMeshSelectionEditActions_ExpandToMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3B60
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionEditActions.Clear
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionEditActions.Clear");
		
		UMeshSelectionEditActions_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionEditActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionEditActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSelectionEditActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3EF0
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionMeshEditActions.SmoothBorder
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionMeshEditActions::SmoothBorder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionMeshEditActions.SmoothBorder");
		
		UMeshSelectionMeshEditActions_SmoothBorder_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3F30
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Separate
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionMeshEditActions::Separate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Separate");
		
		UMeshSelectionMeshEditActions_Separate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3F70
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionMeshEditActions.FlipNormals
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionMeshEditActions::FlipNormals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionMeshEditActions.FlipNormals");
		
		UMeshSelectionMeshEditActions_FlipNormals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3F10
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Duplicate
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionMeshEditActions::Duplicate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Duplicate");
		
		UMeshSelectionMeshEditActions_Duplicate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3F90
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Disconnect
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionMeshEditActions::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Disconnect");
		
		UMeshSelectionMeshEditActions_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3FB0
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Delete
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionMeshEditActions::Delete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Delete");
		
		UMeshSelectionMeshEditActions_Delete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024A3F50
	 * 		Name   -> Function MeshModelingToolsExp.MeshSelectionMeshEditActions.CreatePolygroup
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionMeshEditActions::CreatePolygroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSelectionMeshEditActions.CreatePolygroup");
		
		UMeshSelectionMeshEditActions_CreatePolygroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionMeshEditActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionMeshEditActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSelectionMeshEditActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSelectionToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSelectionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSpaceDeformerToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSpaceDeformerToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSpaceDeformerToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSpaceDeformerToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSpaceDeformerToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSpaceDeformerToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024B0E40
	 * 		Name   -> Function MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet.ShiftToCenter
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSpaceDeformerToolActionPropertySet::ShiftToCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet.ShiftToCenter");
		
		UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSpaceDeformerToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSpaceDeformerToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpaceDeformerOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpaceDeformerOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SpaceDeformerOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSpaceDeformerTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSpaceDeformerTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSpaceDeformerTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshVertexSculptToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshVertexSculptToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshVertexSculptToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVertexBrushSculptProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVertexBrushSculptProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VertexBrushSculptProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVertexBrushAlphaProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVertexBrushAlphaProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VertexBrushAlphaProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSymmetryProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSymmetryProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshSymmetryProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshVertexSculptTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshVertexSculptTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshVertexSculptTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMirrorToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MirrorToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMirrorToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MirrorToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMirrorOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MirrorOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024C1C80
	 * 		Name   -> Function MeshModelingToolsExp.MirrorToolActionPropertySet.Up
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MirrorToolActionPropertySet.Up");
		
		UMirrorToolActionPropertySet_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024C1CE0
	 * 		Name   -> Function MeshModelingToolsExp.MirrorToolActionPropertySet.ShiftToCenter
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::ShiftToCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MirrorToolActionPropertySet.ShiftToCenter");
		
		UMirrorToolActionPropertySet_ShiftToCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024C1CA0
	 * 		Name   -> Function MeshModelingToolsExp.MirrorToolActionPropertySet.Right
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MirrorToolActionPropertySet.Right");
		
		UMirrorToolActionPropertySet_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024C1CC0
	 * 		Name   -> Function MeshModelingToolsExp.MirrorToolActionPropertySet.Left
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MirrorToolActionPropertySet.Left");
		
		UMirrorToolActionPropertySet_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024C1C40
	 * 		Name   -> Function MeshModelingToolsExp.MirrorToolActionPropertySet.Forward
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::Forward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MirrorToolActionPropertySet.Forward");
		
		UMirrorToolActionPropertySet_Forward_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024C1C60
	 * 		Name   -> Function MeshModelingToolsExp.MirrorToolActionPropertySet.Down
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MirrorToolActionPropertySet.Down");
		
		UMirrorToolActionPropertySet_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024C1C20
	 * 		Name   -> Function MeshModelingToolsExp.MirrorToolActionPropertySet.Backward
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::Backward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.MirrorToolActionPropertySet.Backward");
		
		UMirrorToolActionPropertySet_Backward_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMirrorToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MirrorToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMirrorTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MirrorTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOffsetMeshToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetMeshToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.OffsetMeshToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOffsetWeightMapSetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetWeightMapSetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.OffsetWeightMapSetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIterativeOffsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIterativeOffsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.IterativeOffsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImplicitOffsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImplicitOffsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ImplicitOffsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOffsetMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.OffsetMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOffsetMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.OffsetMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsObjectToolPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsObjectToolPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PhysicsObjectToolPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollisionGeometryVisualizationProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollisionGeometryVisualizationProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.CollisionGeometryVisualizationProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExtractCollisionGeometryToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtractCollisionGeometryToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ExtractCollisionGeometryToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExtractCollisionToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtractCollisionToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ExtractCollisionToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExtractCollisionGeometryTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtractCollisionGeometryTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ExtractCollisionGeometryTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsInspectorToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsInspectorToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PhysicsInspectorToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsInspectorTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsInspectorTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PhysicsInspectorTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetCollisionGeometryToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetCollisionGeometryToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SetCollisionGeometryToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetCollisionGeometryToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetCollisionGeometryToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SetCollisionGeometryToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetCollisionGeometryTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetCollisionGeometryTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SetCollisionGeometryTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneCutToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneCutToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PlaneCutToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAcceptOutputProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAcceptOutputProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.AcceptOutputProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneCutToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneCutToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PlaneCutToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneCutOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneCutOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PlaneCutOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024F2510
	 * 		Name   -> Function MeshModelingToolsExp.PlaneCutTool.FlipPlane
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UPlaneCutTool::FlipPlane()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.PlaneCutTool.FlipPlane");
		
		UPlaneCutTool_FlipPlane_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024F2530
	 * 		Name   -> Function MeshModelingToolsExp.PlaneCutTool.Cut
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UPlaneCutTool::Cut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.PlaneCutTool.Cut");
		
		UPlaneCutTool_Cut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneCutTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneCutTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.PlaneCutTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectToTargetToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectToTargetToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ProjectToTargetToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemeshMeshToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshMeshToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RemeshMeshToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectToTargetToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectToTargetToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ProjectToTargetToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemeshMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RemeshMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectToTargetTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectToTargetTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ProjectToTargetTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshAnalysisProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAnalysisProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshAnalysisProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshStatisticsProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshStatisticsProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.MeshStatisticsProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemeshMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RemeshMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveOccludedTrianglesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RemoveOccludedTrianglesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveOccludedTrianglesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RemoveOccludedTrianglesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveOccludedTrianglesAdvancedProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesAdvancedProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RemoveOccludedTrianglesAdvancedProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveOccludedTrianglesOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RemoveOccludedTrianglesOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveOccludedTrianglesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RemoveOccludedTrianglesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveBoundaryToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveBoundaryToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RevolveBoundaryToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveBoundaryOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveBoundaryOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RevolveBoundaryOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveBoundaryToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveBoundaryToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RevolveBoundaryToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveBoundaryTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveBoundaryTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.RevolveBoundaryTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USculptBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USculptBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SculptBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKelvinBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKelvinBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.KelvinBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorkPlaneProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorkPlaneProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.WorkPlaneProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USculptMaxBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USculptMaxBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SculptMaxBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeamSculptToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeamSculptToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SeamSculptToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeamSculptToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeamSculptToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SeamSculptToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeamSculptTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeamSculptTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SeamSculptTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfUnionMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfUnionMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SelfUnionMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfUnionMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfUnionMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SelfUnionMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfUnionMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfUnionMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SelfUnionMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkinWeightsBindingToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinWeightsBindingToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SkinWeightsBindingToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkinWeightsBindingToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinWeightsBindingToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SkinWeightsBindingToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkinWeightsBindingTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinWeightsBindingTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SkinWeightsBindingTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkinWeightsPaintToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinWeightsPaintToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SkinWeightsPaintToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkinWeightsPaintToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinWeightsPaintToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SkinWeightsPaintToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkinWeightsPaintTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinWeightsPaintTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SkinWeightsPaintTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothMeshToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothMeshToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SmoothMeshToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIterativeSmoothProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIterativeSmoothProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.IterativeSmoothProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiffusionSmoothProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiffusionSmoothProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.DiffusionSmoothProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImplicitSmoothProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImplicitSmoothProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.ImplicitSmoothProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothWeightMapSetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothWeightMapSetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SmoothWeightMapSetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SmoothMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SmoothMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplitMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplitMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SplitMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplitMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplitMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SplitMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplitMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplitMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.SplitMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransferMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransferMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.TransferMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02524980
	 * 		Name   -> Function MeshModelingToolsExp.TransferMeshToolProperties.GetTargetLODNamesFunc
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> UTransferMeshToolProperties::GetTargetLODNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.TransferMeshToolProperties.GetTargetLODNamesFunc");
		
		UTransferMeshToolProperties_GetTargetLODNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02400850
	 * 		Name   -> Function MeshModelingToolsExp.TransferMeshToolProperties.GetSourceLODNamesFunc
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> UTransferMeshToolProperties::GetSourceLODNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingToolsExp.TransferMeshToolProperties.GetSourceLODNamesFunc");
		
		UTransferMeshToolProperties_GetSourceLODNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransferMeshToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransferMeshToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.TransferMeshToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransferMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransferMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.TransferMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.TransformMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.TransformMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.TransformMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVolumeToMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVolumeToMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VolumeToMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVolumeToMeshToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVolumeToMeshToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VolumeToMeshToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVolumeToMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVolumeToMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VolumeToMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelBlendMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBlendMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VoxelBlendMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelBlendMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBlendMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VoxelBlendMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelBlendMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBlendMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VoxelBlendMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelMorphologyMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMorphologyMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VoxelMorphologyMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelMorphologyMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMorphologyMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VoxelMorphologyMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelMorphologyMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMorphologyMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VoxelMorphologyMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelSolidifyMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSolidifyMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VoxelSolidifyMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelSolidifyMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSolidifyMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VoxelSolidifyMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelSolidifyMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSolidifyMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.VoxelSolidifyMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeldMeshEdgesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeldMeshEdgesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.WeldMeshEdgesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeldMeshEdgesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeldMeshEdgesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.WeldMeshEdgesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeldMeshEdgesOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeldMeshEdgesOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.WeldMeshEdgesOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeldMeshEdgesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeldMeshEdgesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingToolsExp.WeldMeshEdgesTool");
		return ptr;
	}

}


