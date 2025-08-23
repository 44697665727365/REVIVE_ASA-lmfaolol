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
	 * Function USDStage.UsdStageActor.SetTime
	 */
	struct AUsdStageActor_SetTime_Params
	{
	public:
		float                                                      InTime;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetRootMotionHandling
	 */
	struct AUsdStageActor_SetRootMotionHandling_Params
	{
	public:
		EUsdRootMotionHandling                                     NewHandlingStrategy;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetRootLayer
	 */
	struct AUsdStageActor_SetRootLayer_Params
	{
	public:
		class FString                                              RootFilePath;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetRenderContext
	 */
	struct AUsdStageActor_SetRenderContext_Params
	{
	public:
		class FName                                                NewRenderContext;                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetPurposesToLoad
	 */
	struct AUsdStageActor_SetPurposesToLoad_Params
	{
	public:
		int32_t                                                    NewPurposesToLoad;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetNaniteTriangleThreshold
	 */
	struct AUsdStageActor_SetNaniteTriangleThreshold_Params
	{
	public:
		int32_t                                                    NewNaniteTriangleThreshold;                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetMergeIdenticalMaterialSlots
	 */
	struct AUsdStageActor_SetMergeIdenticalMaterialSlots_Params
	{
	public:
		bool                                                       bMerge;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetMaterialPurpose
	 */
	struct AUsdStageActor_SetMaterialPurpose_Params
	{
	public:
		class FName                                                NewMaterialPurpose;                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetKindsToCollapse
	 */
	struct AUsdStageActor_SetKindsToCollapse_Params
	{
	public:
		int32_t                                                    NewKindsToCollapse;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetIsolatedRootLayer
	 */
	struct AUsdStageActor_SetIsolatedRootLayer_Params
	{
	public:
		class FString                                              IsolatedStageRootLayer;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetInterpolationType
	 */
	struct AUsdStageActor_SetInterpolationType_Params
	{
	public:
		EUsdInterpolationType                                      NewType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetInitialLoadSet
	 */
	struct AUsdStageActor_SetInitialLoadSet_Params
	{
	public:
		EUsdInitialLoadSet                                         NewLoadSet;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetCollapseTopLevelPointInstancers
	 */
	struct AUsdStageActor_SetCollapseTopLevelPointInstancers_Params
	{
	public:
		bool                                                       bCollapse;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.SetAssetCache
	 */
	struct AUsdStageActor_SetAssetCache_Params
	{
	public:
		class UUsdAssetCache2*                                     NewCache;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.NewStage
	 */
	struct AUsdStageActor_NewStage_Params
	{	};

	/**
	 * Function USDStage.UsdStageActor.GetTime
	 */
	struct AUsdStageActor_GetTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.GetSourcePrimPath
	 */
	struct AUsdStageActor_GetSourcePrimPath_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.GetLevelSequence
	 */
	struct AUsdStageActor_GetLevelSequence_Params
	{
	public:
		class ULevelSequence*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.GetIsolatedRootLayer
	 */
	struct AUsdStageActor_GetIsolatedRootLayer_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.GetGeneratedComponent
	 */
	struct AUsdStageActor_GetGeneratedComponent_Params
	{
	public:
		class FString                                              PrimPath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDStage.UsdStageActor.GetGeneratedAssets
	 */
	struct AUsdStageActor_GetGeneratedAssets_Params
	{
	public:
		class FString                                              PrimPath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
