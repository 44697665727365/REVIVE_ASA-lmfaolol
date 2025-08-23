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
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveFunctions.NinjaLiveFunctions_C.CameraFacing
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             InMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseLegacyFacing                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LockY                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    TraceMeshInitRot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveFunctions_C::STATIC_CameraFacing(class USceneComponent* InMesh, bool UseLegacyFacing, bool LockY, const struct FRotator& TraceMeshInitRot, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveFunctions.NinjaLiveFunctions_C.CameraFacing");
		
		UNinjaLiveFunctions_C_CameraFacing_Params params {};
		params.InMesh = InMesh;
		params.UseLegacyFacing = UseLegacyFacing;
		params.LockY = LockY;
		params.TraceMeshInitRot = TraceMeshInitRot;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveFunctions.NinjaLiveFunctions_C.RenderTgAcquisitionStatus
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     SelfRef                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RTnumberadded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESimPrecision_Enum                                 SimPrecision                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ResX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ResY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PoolManDetected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HalfRes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberOfChannels                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Print                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		double                                             MemConsumtion                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveFunctions_C::STATIC_RenderTgAcquisitionStatus(class UObject* SelfRef, int32_t RTnumberadded, ESimPrecision_Enum SimPrecision, int32_t ResX, int32_t ResY, bool PoolManDetected, bool HalfRes, int32_t NumberOfChannels, class UObject* __WorldContext, class FString* Print, double* MemConsumtion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveFunctions.NinjaLiveFunctions_C.RenderTgAcquisitionStatus");
		
		UNinjaLiveFunctions_C_RenderTgAcquisitionStatus_Params params {};
		params.SelfRef = SelfRef;
		params.RTnumberadded = RTnumberadded;
		params.SimPrecision = SimPrecision;
		params.ResX = ResX;
		params.ResY = ResY;
		params.PoolManDetected = PoolManDetected;
		params.HalfRes = HalfRes;
		params.NumberOfChannels = NumberOfChannels;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Print != nullptr)
			*Print = params.Print;
		if (MemConsumtion != nullptr)
			*MemConsumtion = params.MemConsumtion;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveFunctions.NinjaLiveFunctions_C.AcquireRenderTargetsFromPool
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Request0RGBA1RG2R                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HostRenderTGListIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              RenderTargetList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ANinjaLive_MemoryPoolManager_C*              MemoryPoolManager                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FString, class UTextureRenderTarget2D*> RenderTargetsMapTmp                                        (Parm, OutParm)
	 */
	void UNinjaLiveFunctions_C::STATIC_AcquireRenderTargetsFromPool(int32_t Request0RGBA1RG2R, int32_t HostRenderTGListIndex, TArray<class FString>* RenderTargetList, class ANinjaLive_MemoryPoolManager_C* MemoryPoolManager, class UObject* __WorldContext, TMap<class FString, class UTextureRenderTarget2D*>* RenderTargetsMapTmp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveFunctions.NinjaLiveFunctions_C.AcquireRenderTargetsFromPool");
		
		UNinjaLiveFunctions_C_AcquireRenderTargetsFromPool_Params params {};
		params.Request0RGBA1RG2R = Request0RGBA1RG2R;
		params.HostRenderTGListIndex = HostRenderTGListIndex;
		params.MemoryPoolManager = MemoryPoolManager;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RenderTargetList != nullptr)
			*RenderTargetList = params.RenderTargetList;
		if (RenderTargetsMapTmp != nullptr)
			*RenderTargetsMapTmp = params.RenderTargetsMapTmp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveFunctions.NinjaLiveFunctions_C.TemplateLoader
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TemplateDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDataTable*                                  LoadedDataTable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LoadedDatatablePath                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LoadFailed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     LoadedTemplateObject                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LoadedTmpFullPath                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      LoadedTemplateNameOnly                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               UsesAbsolutePath                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveFunctions_C::STATIC_TemplateLoader(const class FName& TemplateDefinition, class UDataTable* LoadedDataTable, const class FString& LoadedDatatablePath, class UObject* __WorldContext, bool* LoadFailed, class UObject** LoadedTemplateObject, class FString* LoadedTmpFullPath, class FString* LoadedTemplateNameOnly, bool* UsesAbsolutePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveFunctions.NinjaLiveFunctions_C.TemplateLoader");
		
		UNinjaLiveFunctions_C_TemplateLoader_Params params {};
		params.TemplateDefinition = TemplateDefinition;
		params.LoadedDataTable = LoadedDataTable;
		params.LoadedDatatablePath = LoadedDatatablePath;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoadFailed != nullptr)
			*LoadFailed = params.LoadFailed;
		if (LoadedTemplateObject != nullptr)
			*LoadedTemplateObject = params.LoadedTemplateObject;
		if (LoadedTmpFullPath != nullptr)
			*LoadedTmpFullPath = params.LoadedTmpFullPath;
		if (LoadedTemplateNameOnly != nullptr)
			*LoadedTemplateNameOnly = params.LoadedTemplateNameOnly;
		if (UsesAbsolutePath != nullptr)
			*UsesAbsolutePath = params.UsesAbsolutePath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveFunctions.NinjaLiveFunctions_C.SingleKeyPicker
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDataTable*                                  DataTableIn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      KeyToPick                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PickedKeyValue                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               NotFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveFunctions_C::STATIC_SingleKeyPicker(class UDataTable* DataTableIn, const class FString& KeyToPick, class UObject* __WorldContext, class FString* PickedKeyValue, bool* NotFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveFunctions.NinjaLiveFunctions_C.SingleKeyPicker");
		
		UNinjaLiveFunctions_C_SingleKeyPicker_Params params {};
		params.DataTableIn = DataTableIn;
		params.KeyToPick = KeyToPick;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedKeyValue != nullptr)
			*PickedKeyValue = params.PickedKeyValue;
		if (NotFound != nullptr)
			*NotFound = params.NotFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveFunctions.NinjaLiveFunctions_C.CreateRenderTarget
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextureRenderTargetFormat                         Format                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Clamping                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextureGroup                                      LODGroup                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextureFilter                                     Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ASA_Compute_Material                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextureRenderTarget2D*                      RTout                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveFunctions_C::STATIC_CreateRenderTarget(int32_t Width, int32_t Height, ETextureRenderTargetFormat Format, bool Clamping, ETextureGroup LODGroup, ETextureFilter Filter, bool ASA_Compute_Material, class UObject* __WorldContext, class UTextureRenderTarget2D** RTout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveFunctions.NinjaLiveFunctions_C.CreateRenderTarget");
		
		UNinjaLiveFunctions_C_CreateRenderTarget_Params params {};
		params.Width = Width;
		params.Height = Height;
		params.Format = Format;
		params.Clamping = Clamping;
		params.LODGroup = LODGroup;
		params.Filter = Filter;
		params.ASA_Compute_Material = ASA_Compute_Material;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RTout != nullptr)
			*RTout = params.RTout;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveFunctions.NinjaLiveFunctions_C.PresetLoader
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                AssetPath                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        AssetTrimmedName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForcePreferredPreset                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDataTable*                                  PreferredPreset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UDataTable*                                  LoadedDataTable                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LoadedDatatablePath                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TMap<class FString, double>                        PresetMap                                                  (Parm, OutParm)
	 */
	void UNinjaLiveFunctions_C::STATIC_PresetLoader(const class FString& PresetName, TArray<class FName>* AssetPath, const class FName& AssetTrimmedName, bool ForcePreferredPreset, class UDataTable* PreferredPreset, class UObject* __WorldContext, class UDataTable** LoadedDataTable, class FString* LoadedDatatablePath, TMap<class FString, double>* PresetMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveFunctions.NinjaLiveFunctions_C.PresetLoader");
		
		UNinjaLiveFunctions_C_PresetLoader_Params params {};
		params.PresetName = PresetName;
		params.AssetTrimmedName = AssetTrimmedName;
		params.ForcePreferredPreset = ForcePreferredPreset;
		params.PreferredPreset = PreferredPreset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetPath != nullptr)
			*AssetPath = params.AssetPath;
		if (LoadedDataTable != nullptr)
			*LoadedDataTable = params.LoadedDataTable;
		if (LoadedDatatablePath != nullptr)
			*LoadedDatatablePath = params.LoadedDatatablePath;
		if (PresetMap != nullptr)
			*PresetMap = params.PresetMap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveFunctions.NinjaLiveFunctions_C.TraceOverlap
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             TracelineOvershoot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              FluidNinjaLIVEActors                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HitUV                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TracePosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveFunctions_C::STATIC_TraceOverlap(const struct FVector& Start, const struct FVector& End, double TracelineOvershoot, ETraceTypeQuery TraceChannel, TArray<class AActor*>* FluidNinjaLIVEActors, class UObject* __WorldContext, struct FLinearColor* HitUV, struct FVector* TracePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveFunctions.NinjaLiveFunctions_C.TraceOverlap");
		
		UNinjaLiveFunctions_C_TraceOverlap_Params params {};
		params.Start = Start;
		params.End = End;
		params.TracelineOvershoot = TracelineOvershoot;
		params.TraceChannel = TraceChannel;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FluidNinjaLIVEActors != nullptr)
			*FluidNinjaLIVEActors = params.FluidNinjaLIVEActors;
		if (HitUV != nullptr)
			*HitUV = params.HitUV;
		if (TracePosition != nullptr)
			*TracePosition = params.TracePosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveFunctions.NinjaLiveFunctions_C.TraceMouse
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TouchSensitive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      FingerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              FluidNinjaLIVEActors                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HitUV                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SimHitByMouse                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               MouseClickValid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TouchValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveFunctions_C::STATIC_TraceMouse(class UObject* HitComponent, bool TouchSensitive, unsigned char FingerIndex, ETraceTypeQuery TraceChannel, TArray<class AActor*> FluidNinjaLIVEActors, class UObject* __WorldContext, struct FLinearColor* HitUV, bool* SimHitByMouse, bool* MouseClickValid, bool* TouchValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveFunctions.NinjaLiveFunctions_C.TraceMouse");
		
		UNinjaLiveFunctions_C_TraceMouse_Params params {};
		params.HitComponent = HitComponent;
		params.TouchSensitive = TouchSensitive;
		params.FingerIndex = FingerIndex;
		params.TraceChannel = TraceChannel;
		params.FluidNinjaLIVEActors = FluidNinjaLIVEActors;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitUV != nullptr)
			*HitUV = params.HitUV;
		if (SimHitByMouse != nullptr)
			*SimHitByMouse = params.SimHitByMouse;
		if (MouseClickValid != nullptr)
			*MouseClickValid = params.MouseClickValid;
		if (TouchValid != nullptr)
			*TouchValid = params.TouchValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNinjaLiveFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNinjaLiveFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NinjaLiveFunctions.NinjaLiveFunctions_C");
		return ptr;
	}

}


