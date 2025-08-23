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
	 * 		Name   -> PredefinedFunction UUsdPrimTwin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUsdPrimTwin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class USDStage.UsdPrimTwin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C66FC0
	 * 		Name   -> Function USDStage.UsdStageActor.SetTime
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetTime(float InTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetTime");
		
		AUsdStageActor_SetTime_Params params {};
		params.InTime = InTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C670E0
	 * 		Name   -> Function USDStage.UsdStageActor.SetRootMotionHandling
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUsdRootMotionHandling                             NewHandlingStrategy                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetRootMotionHandling(EUsdRootMotionHandling NewHandlingStrategy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetRootMotionHandling");
		
		AUsdStageActor_SetRootMotionHandling_Params params {};
		params.NewHandlingStrategy = NewHandlingStrategy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C67B30
	 * 		Name   -> Function USDStage.UsdStageActor.SetRootLayer
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RootFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetRootLayer(const class FString& RootFilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetRootLayer");
		
		AUsdStageActor_SetRootLayer_Params params {};
		params.RootFilePath = RootFilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C672C0
	 * 		Name   -> Function USDStage.UsdStageActor.SetRenderContext
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        NewRenderContext                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetRenderContext(const class FName& NewRenderContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetRenderContext");
		
		AUsdStageActor_SetRenderContext_Params params {};
		params.NewRenderContext = NewRenderContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C674A0
	 * 		Name   -> Function USDStage.UsdStageActor.SetPurposesToLoad
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewPurposesToLoad                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetPurposesToLoad(int32_t NewPurposesToLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetPurposesToLoad");
		
		AUsdStageActor_SetPurposesToLoad_Params params {};
		params.NewPurposesToLoad = NewPurposesToLoad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C673B0
	 * 		Name   -> Function USDStage.UsdStageActor.SetNaniteTriangleThreshold
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewNaniteTriangleThreshold                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetNaniteTriangleThreshold(int32_t NewNaniteTriangleThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetNaniteTriangleThreshold");
		
		AUsdStageActor_SetNaniteTriangleThreshold_Params params {};
		params.NewNaniteTriangleThreshold = NewNaniteTriangleThreshold;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C67660
	 * 		Name   -> Function USDStage.UsdStageActor.SetMergeIdenticalMaterialSlots
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bMerge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetMergeIdenticalMaterialSlots(bool bMerge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetMergeIdenticalMaterialSlots");
		
		AUsdStageActor_SetMergeIdenticalMaterialSlots_Params params {};
		params.bMerge = bMerge;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C671D0
	 * 		Name   -> Function USDStage.UsdStageActor.SetMaterialPurpose
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        NewMaterialPurpose                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetMaterialPurpose(const class FName& NewMaterialPurpose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetMaterialPurpose");
		
		AUsdStageActor_SetMaterialPurpose_Params params {};
		params.NewMaterialPurpose = NewMaterialPurpose;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C67750
	 * 		Name   -> Function USDStage.UsdStageActor.SetKindsToCollapse
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewKindsToCollapse                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetKindsToCollapse(int32_t NewKindsToCollapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetKindsToCollapse");
		
		AUsdStageActor_SetKindsToCollapse_Params params {};
		params.NewKindsToCollapse = NewKindsToCollapse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C66A30
	 * 		Name   -> Function USDStage.UsdStageActor.SetIsolatedRootLayer
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IsolatedStageRootLayer                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetIsolatedRootLayer(const class FString& IsolatedStageRootLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetIsolatedRootLayer");
		
		AUsdStageActor_SetIsolatedRootLayer_Params params {};
		params.IsolatedStageRootLayer = IsolatedStageRootLayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C67860
	 * 		Name   -> Function USDStage.UsdStageActor.SetInterpolationType
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUsdInterpolationType                              NewType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetInterpolationType(EUsdInterpolationType NewType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetInterpolationType");
		
		AUsdStageActor_SetInterpolationType_Params params {};
		params.NewType = NewType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C67950
	 * 		Name   -> Function USDStage.UsdStageActor.SetInitialLoadSet
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUsdInitialLoadSet                                 NewLoadSet                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetInitialLoadSet(EUsdInitialLoadSet NewLoadSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetInitialLoadSet");
		
		AUsdStageActor_SetInitialLoadSet_Params params {};
		params.NewLoadSet = NewLoadSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C67590
	 * 		Name   -> Function USDStage.UsdStageActor.SetCollapseTopLevelPointInstancers
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCollapse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetCollapseTopLevelPointInstancers(bool bCollapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetCollapseTopLevelPointInstancers");
		
		AUsdStageActor_SetCollapseTopLevelPointInstancers_Params params {};
		params.bCollapse = bCollapse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C67A40
	 * 		Name   -> Function USDStage.UsdStageActor.SetAssetCache
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UUsdAssetCache2*                             NewCache                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUsdStageActor::SetAssetCache(class UUsdAssetCache2* NewCache)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.SetAssetCache");
		
		AUsdStageActor_SetAssetCache_Params params {};
		params.NewCache = NewCache;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012EBCE0
	 * 		Name   -> Function USDStage.UsdStageActor.NewStage
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 */
	void AUsdStageActor::NewStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.NewStage");
		
		AUsdStageActor_NewStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C670C0
	 * 		Name   -> Function USDStage.UsdStageActor.GetTime
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AUsdStageActor::GetTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.GetTime");
		
		AUsdStageActor_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C66B70
	 * 		Name   -> Function USDStage.UsdStageActor.GetSourcePrimPath
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString AUsdStageActor::GetSourcePrimPath(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.GetSourcePrimPath");
		
		AUsdStageActor_GetSourcePrimPath_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C66FA0
	 * 		Name   -> Function USDStage.UsdStageActor.GetLevelSequence
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 */
	class ULevelSequence* AUsdStageActor::GetLevelSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.GetLevelSequence");
		
		AUsdStageActor_GetLevelSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C669E0
	 * 		Name   -> Function USDStage.UsdStageActor.GetIsolatedRootLayer
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString AUsdStageActor::GetIsolatedRootLayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.GetIsolatedRootLayer");
		
		AUsdStageActor_GetIsolatedRootLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C66EB0
	 * 		Name   -> Function USDStage.UsdStageActor.GetGeneratedComponent
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PrimPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USceneComponent* AUsdStageActor::GetGeneratedComponent(const class FString& PrimPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.GetGeneratedComponent");
		
		AUsdStageActor_GetGeneratedComponent_Params params {};
		params.PrimPath = PrimPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C66D60
	 * 		Name   -> Function USDStage.UsdStageActor.GetGeneratedAssets
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PrimPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UObject*> AUsdStageActor::GetGeneratedAssets(const class FString& PrimPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDStage.UsdStageActor.GetGeneratedAssets");
		
		AUsdStageActor_GetGeneratedAssets_Params params {};
		params.PrimPath = PrimPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUsdStageActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUsdStageActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class USDStage.UsdStageActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUsdTransactor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUsdTransactor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class USDStage.UsdTransactor");
		return ptr;
	}

}


