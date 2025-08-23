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
	 * Function MeshModelingToolsExp.BakeInputMeshProperties.GetTargetUVLayerNamesFunc
	 */
	struct UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.BakeInputMeshProperties.GetSourceUVLayerNamesFunc
	 */
	struct UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.BakeTexture2DProperties.GetUVLayerNamesFunc
	 */
	struct UBakeTexture2DProperties_GetUVLayerNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.BakeMultiTexture2DProperties.GetUVLayerNamesFunc
	 */
	struct UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
	 */
	struct UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
	 */
	struct UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.BakeMultiMeshInputToolProperties.GetTargetUVLayerNamesFunc
	 */
	struct UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.BakeRenderCaptureToolProperties.GetMapPreviewNamesFunc
	 */
	struct UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.BakeRenderCaptureInputToolProperties.GetTargetUVLayerNamesFunc
	 */
	struct UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.BakeRenderCaptureInputToolProperties.GetTargetUVLayerIndex
	 */
	struct UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.OutputPolygroupLayerProperties.GetGroupOptionsList
	 */
	struct UOutputPolygroupLayerProperties_GetGroupOptionsList_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.CubeGridToolActions.SlideForward
	 */
	struct UCubeGridToolActions_SlideForward_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.CubeGridToolActions.SlideBack
	 */
	struct UCubeGridToolActions_SlideBack_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.CubeGridToolActions.ResetGridFromActor
	 */
	struct UCubeGridToolActions_ResetGridFromActor_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.CubeGridToolActions.Push
	 */
	struct UCubeGridToolActions_Push_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.CubeGridToolActions.Pull
	 */
	struct UCubeGridToolActions_Pull_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.CubeGridToolActions.Flip
	 */
	struct UCubeGridToolActions_Flip_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.CubeGridToolActions.CornerMode
	 */
	struct UCubeGridToolActions_CornerMode_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.CubeGridDuringActivityActions.Done
	 */
	struct UCubeGridDuringActivityActions_Done_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.CubeGridDuringActivityActions.Cancel
	 */
	struct UCubeGridDuringActivityActions_Cancel_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.DisplaceMeshCommonProperties.GetWeightMapsFunc
	 */
	struct UDisplaceMeshCommonProperties_GetWeightMapsFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.SelectiveTessellationProperties.GetMaterialIDsFunc
	 */
	struct USelectiveTessellationProperties_GetMaterialIDsFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.DynamicSculptToolActions.DiscardAttributes
	 */
	struct UDynamicSculptToolActions_DiscardAttributes_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.EditPivotToolActionPropertySet.WorldOrigin
	 */
	struct UEditPivotToolActionPropertySet_WorldOrigin_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Top
	 */
	struct UEditPivotToolActionPropertySet_Top_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Right
	 */
	struct UEditPivotToolActionPropertySet_Right_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Left
	 */
	struct UEditPivotToolActionPropertySet_Left_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Front
	 */
	struct UEditPivotToolActionPropertySet_Front_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Center
	 */
	struct UEditPivotToolActionPropertySet_Center_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Bottom
	 */
	struct UEditPivotToolActionPropertySet_Bottom_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Back
	 */
	struct UEditPivotToolActionPropertySet_Back_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.HoleFillToolActions.SelectAll
	 */
	struct UHoleFillToolActions_SelectAll_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.HoleFillToolActions.Clear
	 */
	struct UHoleFillToolActions_Clear_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.LatticeDeformerToolProperties.Constrain
	 */
	struct ULatticeDeformerToolProperties_Constrain_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.LatticeDeformerToolProperties.ClearConstraints
	 */
	struct ULatticeDeformerToolProperties_ClearConstraints_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshAttributePaintToolProperties.GetAttributeNames
	 */
	struct UMeshAttributePaintToolProperties_GetAttributeNames_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.UnfreezeAll
	 */
	struct UMeshGroupPaintToolFreezeActions_UnfreezeAll_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ShrinkCurrent
	 */
	struct UMeshGroupPaintToolFreezeActions_ShrinkCurrent_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.GrowCurrent
	 */
	struct UMeshGroupPaintToolFreezeActions_GrowCurrent_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeOthers
	 */
	struct UMeshGroupPaintToolFreezeActions_FreezeOthers_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeCurrent
	 */
	struct UMeshGroupPaintToolFreezeActions_FreezeCurrent_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FloodFillCurrent
	 */
	struct UMeshGroupPaintToolFreezeActions_FloodFillCurrent_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearCurrent
	 */
	struct UMeshGroupPaintToolFreezeActions_ClearCurrent_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearAll
	 */
	struct UMeshGroupPaintToolFreezeActions_ClearAll_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshInspectorMaterialProperties.GetUVChannelNamesFunc
	 */
	struct UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionEditActions.Shrink
	 */
	struct UMeshSelectionEditActions_Shrink_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionEditActions.SelectAll
	 */
	struct UMeshSelectionEditActions_SelectAll_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionEditActions.OptimizeBorder
	 */
	struct UMeshSelectionEditActions_OptimizeBorder_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionEditActions.LargestTriCountPart
	 */
	struct UMeshSelectionEditActions_LargestTriCountPart_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionEditActions.LargestAreaPart
	 */
	struct UMeshSelectionEditActions_LargestAreaPart_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionEditActions.Invert
	 */
	struct UMeshSelectionEditActions_Invert_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionEditActions.Grow
	 */
	struct UMeshSelectionEditActions_Grow_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionEditActions.FloodFill
	 */
	struct UMeshSelectionEditActions_FloodFill_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionEditActions.ExpandToMaterials
	 */
	struct UMeshSelectionEditActions_ExpandToMaterials_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionEditActions.Clear
	 */
	struct UMeshSelectionEditActions_Clear_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionMeshEditActions.SmoothBorder
	 */
	struct UMeshSelectionMeshEditActions_SmoothBorder_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Separate
	 */
	struct UMeshSelectionMeshEditActions_Separate_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionMeshEditActions.FlipNormals
	 */
	struct UMeshSelectionMeshEditActions_FlipNormals_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Duplicate
	 */
	struct UMeshSelectionMeshEditActions_Duplicate_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Disconnect
	 */
	struct UMeshSelectionMeshEditActions_Disconnect_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Delete
	 */
	struct UMeshSelectionMeshEditActions_Delete_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSelectionMeshEditActions.CreatePolygroup
	 */
	struct UMeshSelectionMeshEditActions_CreatePolygroup_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet.ShiftToCenter
	 */
	struct UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MirrorToolActionPropertySet.Up
	 */
	struct UMirrorToolActionPropertySet_Up_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MirrorToolActionPropertySet.ShiftToCenter
	 */
	struct UMirrorToolActionPropertySet_ShiftToCenter_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MirrorToolActionPropertySet.Right
	 */
	struct UMirrorToolActionPropertySet_Right_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MirrorToolActionPropertySet.Left
	 */
	struct UMirrorToolActionPropertySet_Left_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MirrorToolActionPropertySet.Forward
	 */
	struct UMirrorToolActionPropertySet_Forward_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MirrorToolActionPropertySet.Down
	 */
	struct UMirrorToolActionPropertySet_Down_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.MirrorToolActionPropertySet.Backward
	 */
	struct UMirrorToolActionPropertySet_Backward_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.PlaneCutTool.FlipPlane
	 */
	struct UPlaneCutTool_FlipPlane_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.PlaneCutTool.Cut
	 */
	struct UPlaneCutTool_Cut_Params
	{	};

	/**
	 * Function MeshModelingToolsExp.TransferMeshToolProperties.GetTargetLODNamesFunc
	 */
	struct UTransferMeshToolProperties_GetTargetLODNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshModelingToolsExp.TransferMeshToolProperties.GetSourceLODNamesFunc
	 */
	struct UTransferMeshToolProperties_GetSourceLODNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
