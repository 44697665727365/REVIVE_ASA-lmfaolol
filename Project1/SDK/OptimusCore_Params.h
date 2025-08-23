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
	 * Function OptimusCore.OptimusNode.SetGraphPosition
	 */
	struct UOptimusNode_SetGraphPosition_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNode.GetNodeName
	 */
	struct UOptimusNode_GetNodeName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNode.GetNodeCategory
	 */
	struct UOptimusNode_GetNodeCategory_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNode.GetGraphPosition
	 */
	struct UOptimusNode_GetGraphPosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNode.GetDisplayName
	 */
	struct UOptimusNode_GetDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusDeformer.GetVariables
	 */
	struct UOptimusDeformer_GetVariables_Params
	{
	public:
		TArray<class UOptimusVariableDescription*>                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusDeformer.GetResources
	 */
	struct UOptimusDeformer_GetResources_Params
	{
	public:
		TArray<class UOptimusResourceDescription*>                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusDeformer.GetComponentBindings
	 */
	struct UOptimusDeformer_GetComponentBindings_Params
	{
	public:
		TArray<class UOptimusComponentSourceBinding*>              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusDeformerInstance.SetVectorVariable
	 */
	struct UOptimusDeformerInstance_SetVectorVariable_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InValue;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusDeformerInstance.SetVector4Variable
	 */
	struct UOptimusDeformerInstance_SetVector4Variable_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8NRC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector4                                            InValue;                                                 // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusDeformerInstance.SetTransformVariable
	 */
	struct UOptimusDeformerInstance_SetTransformVariable_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E963[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InValue;                                                 // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusDeformerInstance.SetIntVariable
	 */
	struct UOptimusDeformerInstance_SetIntVariable_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InValue;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusDeformerInstance.SetFloatVariable
	 */
	struct UOptimusDeformerInstance_SetFloatVariable_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     InValue;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusDeformerInstance.SetBoolVariable
	 */
	struct UOptimusDeformerInstance_SetBoolVariable_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusDeformerInstance.GetVariables
	 */
	struct UOptimusDeformerInstance_GetVariables_Params
	{
	public:
		TArray<class UOptimusVariableDescription*>                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusDeformerInstance.EnqueueTriggerGraph
	 */
	struct UOptimusDeformerInstance_EnqueueTriggerGraph_Params
	{
	public:
		class FName                                                InTriggerGraphName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.RenameGraph
	 */
	struct UOptimusNodeGraph_RenameGraph_Params
	{
	public:
		class UOptimusNodeGraph*                                   InGraph;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InNewName;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.RemoveNodes
	 */
	struct UOptimusNodeGraph_RemoveNodes_Params
	{
	public:
		TArray<class UOptimusNode*>                                InNodes;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.RemoveNode
	 */
	struct UOptimusNodeGraph_RemoveNode_Params
	{
	public:
		class UOptimusNode*                                        InNode;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.RemoveLink
	 */
	struct UOptimusNodeGraph_RemoveLink_Params
	{
	public:
		class UOptimusNodePin*                                     InNodeOutputPin;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNodePin*                                     InNodeInputPin;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.RemoveAllLinks
	 */
	struct UOptimusNodeGraph_RemoveAllLinks_Params
	{
	public:
		class UOptimusNodePin*                                     InNodePin;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.MoveGraph
	 */
	struct UOptimusNodeGraph_MoveGraph_Params
	{
	public:
		class UOptimusNodeGraph*                                   InGraph;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InInsertBefore;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.IsSubGraphReference
	 */
	struct UOptimusNodeGraph_IsSubGraphReference_Params
	{
	public:
		class UOptimusNode*                                        InNode;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.IsKernelFunction
	 */
	struct UOptimusNodeGraph_IsKernelFunction_Params
	{
	public:
		class UOptimusNode*                                        InNode;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.IsFunctionReference
	 */
	struct UOptimusNodeGraph_IsFunctionReference_Params
	{
	public:
		class UOptimusNode*                                        InNode;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.IsFunctionGraph
	 */
	struct UOptimusNodeGraph_IsFunctionGraph_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.IsExecutionGraph
	 */
	struct UOptimusNodeGraph_IsExecutionGraph_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.IsCustomKernel
	 */
	struct UOptimusNodeGraph_IsCustomKernel_Params
	{
	public:
		class UOptimusNode*                                        InNode;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.GetGraphType
	 */
	struct UOptimusNodeGraph_GetGraphType_Params
	{
	public:
		EOptimusNodeGraphType                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.GetGraphs
	 */
	struct UOptimusNodeGraph_GetGraphs_Params
	{
	public:
		TArray<class UOptimusNodeGraph*>                           ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.GetGraphIndex
	 */
	struct UOptimusNodeGraph_GetGraphIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.ExpandCollapsedNodes
	 */
	struct UOptimusNodeGraph_ExpandCollapsedNodes_Params
	{
	public:
		class UOptimusNode*                                        InFunctionNode;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UOptimusNode*>                                ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.DuplicateNodes
	 */
	struct UOptimusNodeGraph_DuplicateNodes_Params
	{
	public:
		TArray<class UOptimusNode*>                                InNodes;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector2D                                           InPosition;                                              // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.DuplicateNode
	 */
	struct UOptimusNodeGraph_DuplicateNode_Params
	{
	public:
		class UOptimusNode*                                        InNode;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InPosition;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.ConvertFunctionToCustomKernel
	 */
	struct UOptimusNodeGraph_ConvertFunctionToCustomKernel_Params
	{
	public:
		class UOptimusNode*                                        InKernelFunction;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.ConvertCustomKernelToFunction
	 */
	struct UOptimusNodeGraph_ConvertCustomKernelToFunction_Params
	{
	public:
		class UOptimusNode*                                        InCustomKernel;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.CollapseNodesToSubGraph
	 */
	struct UOptimusNodeGraph_CollapseNodesToSubGraph_Params
	{
	public:
		TArray<class UOptimusNode*>                                InNodes;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.CollapseNodesToFunction
	 */
	struct UOptimusNodeGraph_CollapseNodesToFunction_Params
	{
	public:
		TArray<class UOptimusNode*>                                InNodes;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.AddVariableGetNode
	 */
	struct UOptimusNodeGraph_AddVariableGetNode_Params
	{
	public:
		class UOptimusVariableDescription*                         InVariableDesc;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InPosition;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.AddValueNode
	 */
	struct UOptimusNodeGraph_AddValueNode_Params
	{
	public:
		struct FOptimusDataTypeRef                                 InDataTypeRef;                                           // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           InPosition;                                              // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.AddResourceSetNode
	 */
	struct UOptimusNodeGraph_AddResourceSetNode_Params
	{
	public:
		class UOptimusResourceDescription*                         InResourceDesc;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InPosition;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.AddResourceNode
	 */
	struct UOptimusNodeGraph_AddResourceNode_Params
	{
	public:
		class UOptimusResourceDescription*                         InResourceDesc;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InPosition;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.AddResourceGetNode
	 */
	struct UOptimusNodeGraph_AddResourceGetNode_Params
	{
	public:
		class UOptimusResourceDescription*                         InResourceDesc;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InPosition;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.AddNode
	 */
	struct UOptimusNodeGraph_AddNode_Params
	{
	public:
		class UClass*                                              InNodeClass;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InPosition;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.AddLink
	 */
	struct UOptimusNodeGraph_AddLink_Params
	{
	public:
		class UOptimusNodePin*                                     InNodeOutputPin;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNodePin*                                     InNodeInputPin;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.AddDataInterfaceNode
	 */
	struct UOptimusNodeGraph_AddDataInterfaceNode_Params
	{
	public:
		class UClass*                                              InDataInterfaceClass;                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InPosition;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OptimusCore.OptimusNodeGraph.AddComponentBindingGetNode
	 */
	struct UOptimusNodeGraph_AddComponentBindingGetNode_Params
	{
	public:
		class UOptimusComponentSourceBinding*                      InComponentBinding;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InPosition;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOptimusNode*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
