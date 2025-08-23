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
	 * 		Name   -> Function GeometryCollectionEngine.PrimalDestructibleActor.StaticBPPreDestructionHandleAttachedComponentClass
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      AttachedComponentClass                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInstancedStaticMeshComponent*               ForMeshComp                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InstancePosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    InstanceRotation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitDirection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TotalHealth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APrimalDestructibleActor::StaticBPPreDestructionHandleAttachedComponentClass(class UClass* AttachedComponentClass, class UInstancedStaticMeshComponent* ForMeshComp, const struct FVector& InstancePosition, const struct FRotator& InstanceRotation, int32_t InstanceIndex, const struct FVector& HitDirection, float Damage, float TotalHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.PrimalDestructibleActor.StaticBPPreDestructionHandleAttachedComponentClass");
		
		APrimalDestructibleActor_StaticBPPreDestructionHandleAttachedComponentClass_Params params {};
		params.AttachedComponentClass = AttachedComponentClass;
		params.ForMeshComp = ForMeshComp;
		params.InstancePosition = InstancePosition;
		params.InstanceRotation = InstanceRotation;
		params.InstanceIndex = InstanceIndex;
		params.HitDirection = HitDirection;
		params.Damage = Damage;
		params.TotalHealth = TotalHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530ABA0
	 * 		Name   -> Function GeometryCollectionEngine.PrimalDestructibleActor.SetGeoCollection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGeometryCollection*                         GeoCollection                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APrimalDestructibleActor::SetGeoCollection(class UGeometryCollection* GeoCollection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.PrimalDestructibleActor.SetGeoCollection");
		
		APrimalDestructibleActor_SetGeoCollection_Params params {};
		params.GeoCollection = GeoCollection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function GeometryCollectionEngine.PrimalDestructibleActor.BPStartDestruction
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class UGeometryCollection*                         destructionAsset                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitDirection                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TotalHealth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APrimalDestructibleActor::BPStartDestruction(class UGeometryCollection* destructionAsset, const struct FVector& HitDirection, float Damage, float TotalHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.PrimalDestructibleActor.BPStartDestruction");
		
		APrimalDestructibleActor_BPStartDestruction_Params params {};
		params.destructionAsset = destructionAsset;
		params.HitDirection = HitDirection;
		params.Damage = Damage;
		params.TotalHealth = TotalHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrimalDestructibleActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrimalDestructibleActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.PrimalDestructibleActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530B320
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FChaosTrailingEventData>             TrailingEvents                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EChaosTrailingSortMethod                           SortMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SortTrailingEvents(TArray<struct FChaosTrailingEventData>* TrailingEvents, EChaosTrailingSortMethod SortMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents");
		
		UChaosDestructionListener_SortTrailingEvents_Params params {};
		params.SortMethod = SortMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrailingEvents != nullptr)
			*TrailingEvents = params.TrailingEvents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530B150
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FChaosRemovalEventData>              RemovalEvents                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EChaosRemovalSortMethod                            SortMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SortRemovalEvents(TArray<struct FChaosRemovalEventData>* RemovalEvents, EChaosRemovalSortMethod SortMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents");
		
		UChaosDestructionListener_SortRemovalEvents_Params params {};
		params.SortMethod = SortMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RemovalEvents != nullptr)
			*RemovalEvents = params.RemovalEvents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530B6C0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FChaosCollisionEventData>            CollisionEvents                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EChaosCollisionSortMethod                          SortMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents, EChaosCollisionSortMethod SortMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents");
		
		UChaosDestructionListener_SortCollisionEvents_Params params {};
		params.SortMethod = SortMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CollisionEvents != nullptr)
			*CollisionEvents = params.CollisionEvents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530B4F0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FChaosBreakingEventData>             BreakingEvents                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EChaosBreakingSortMethod                           SortMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SortBreakingEvents(TArray<struct FChaosBreakingEventData>* BreakingEvents, EChaosBreakingSortMethod SortMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents");
		
		UChaosDestructionListener_SortBreakingEvents_Params params {};
		params.SortMethod = SortMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BreakingEvents != nullptr)
			*BreakingEvents = params.BreakingEvents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530BDC0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChaosTrailingEventRequestSettings          InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings");
		
		UChaosDestructionListener_SetTrailingEventRequestSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530B9C0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled");
		
		UChaosDestructionListener_SetTrailingEventEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530BCC0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChaosRemovalEventRequestSettings           InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetRemovalEventRequestSettings(const struct FChaosRemovalEventRequestSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings");
		
		UChaosDestructionListener_SetRemovalEventRequestSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530B8C0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetRemovalEventEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled");
		
		UChaosDestructionListener_SetRemovalEventEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530BFE0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChaosCollisionEventRequestSettings         InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings");
		
		UChaosDestructionListener_SetCollisionEventRequestSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530BBC0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled");
		
		UChaosDestructionListener_SetCollisionEventEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530BED0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChaosBreakingEventRequestSettings          InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings");
		
		UChaosDestructionListener_SetBreakingEventRequestSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530BAC0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled");
		
		UChaosDestructionListener_SetBreakingEventEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530C0F0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGeometryCollectionActor*                    GeometryCollectionActor                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor");
		
		UChaosDestructionListener_RemoveGeometryCollectionActor_Params params {};
		params.GeometryCollectionActor = GeometryCollectionActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013CFC10
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AChaosSolverActor*                           ChaosSolverActor                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor");
		
		UChaosDestructionListener_RemoveChaosSolverActor_Params params {};
		params.ChaosSolverActor = ChaosSolverActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530B890
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UChaosDestructionListener::IsEventListening()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening");
		
		UChaosDestructionListener_IsEventListening_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0530C2B0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGeometryCollectionActor*                    GeometryCollectionActor                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor");
		
		UChaosDestructionListener_AddGeometryCollectionActor_Params params {};
		params.GeometryCollectionActor = GeometryCollectionActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013CFC10
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AChaosSolverActor*                           ChaosSolverActor                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor");
		
		UChaosDestructionListener_AddChaosSolverActor_Params params {};
		params.ChaosSolverActor = ChaosSolverActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosDestructionListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosDestructionListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.ChaosDestructionListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x053100D0
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool AGeometryCollectionActor::RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");
		
		AGeometryCollectionActor_RaycastSingle_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGeometryCollectionActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGeometryCollectionActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCollectionCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCollectionCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05312D10
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGeometryCollection*                         RestCollectionIn                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::SetRestCollection(class UGeometryCollection* RestCollectionIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection");
		
		UGeometryCollectionComponent_SetRestCollection_Params params {};
		params.RestCollectionIn = RestCollectionIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05311DE0
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewNotifyRemovals                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::SetNotifyRemovals(bool bNewNotifyRemovals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals");
		
		UGeometryCollectionComponent_SetNotifyRemovals_Params params {};
		params.bNewNotifyRemovals = bNewNotifyRemovals;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05311B60
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewNotifyCrumblings                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewCrumblingEventIncludesChildren                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings");
		
		UGeometryCollectionComponent_SetNotifyCrumblings_Params params {};
		params.bNewNotifyCrumblings = bNewNotifyCrumblings;
		params.bNewCrumblingEventIncludesChildren = bNewCrumblingEventIncludesChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05311F90
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewNotifyBreaks                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks");
		
		UGeometryCollectionComponent_SetNotifyBreaks_Params params {};
		params.bNewNotifyBreaks = bNewNotifyBreaks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05312B30
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::SetEnableDamageFromCollision(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision");
		
		UGeometryCollectionComponent_SetEnableDamageFromCollision_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05313AE0
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAnchored                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::SetAnchoredByTransformedBox(const struct FBox& Box, const struct FTransform& Transform, bool bAnchored, int32_t MaxLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox");
		
		UGeometryCollectionComponent_SetAnchoredByTransformedBox_Params params {};
		params.Box = Box;
		params.Transform = Transform;
		params.bAnchored = bAnchored;
		params.MaxLevel = MaxLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x053141A0
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAnchored                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::SetAnchoredByIndex(int32_t Index, bool bAnchored)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex");
		
		UGeometryCollectionComponent_SetAnchoredByIndex_Params params {};
		params.Index = Index;
		params.bAnchored = bAnchored;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05313E90
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FBox                                        WorldSpaceBox                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bAnchored                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::SetAnchoredByBox(const struct FBox& WorldSpaceBox, bool bAnchored, int32_t MaxLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox");
		
		UGeometryCollectionComponent_SetAnchoredByBox_Params params {};
		params.WorldSpaceBox = WorldSpaceBox;
		params.bAnchored = bAnchored;
		params.MaxLevel = MaxLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05313940
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGeometryCollectionComponent::RemoveAllAnchors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors");
		
		UGeometryCollectionComponent_RemoveAllAnchors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FChaosPhysicsCollisionInfo                  CollisionInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision");
		
		UGeometryCollectionComponent_ReceivePhysicsCollision_Params params {};
		params.CollisionInfo = CollisionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UGeometryCollectionComponent*                FracturedComponent                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");
		
		UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params params {};
		params.FracturedComponent = FracturedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UGeometryCollectionComponent*                FracturedComponent                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");
		
		UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params params {};
		params.FracturedComponent = FracturedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05313270
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGeometryCollectionComponent::GetRootIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex");
		
		UGeometryCollectionComponent_GetRootIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05313030
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutMass                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        OutExtents                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::GetMassAndExtents(int32_t ItemIndex, float* OutMass, struct FBox* OutExtents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents");
		
		UGeometryCollectionComponent_GetMassAndExtents_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMass != nullptr)
			*OutMass = params.OutMass;
		if (OutExtents != nullptr)
			*OutExtents = params.OutExtents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05314FC0
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBox UGeometryCollectionComponent::GetLocalBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds");
		
		UGeometryCollectionComponent_GetLocalBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x053132A0
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryCollectionComponent::GetInitialLevel(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel");
		
		UGeometryCollectionComponent_GetInitialLevel_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05312C90
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UGeometryCollectionComponent::GetDebugInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo");
		
		UGeometryCollectionComponent_GetDebugInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05314610
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::CrumbleCluster(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster");
		
		UGeometryCollectionComponent_CrumbleCluster_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05314470
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGeometryCollectionComponent::CrumbleActiveClusters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters");
		
		UGeometryCollectionComponent_CrumbleActiveClusters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05312C60
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.BPGetMaxIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UGeometryCollectionComponent::BPGetMaxIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.BPGetMaxIndex");
		
		UGeometryCollectionComponent_BPGetMaxIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05312140
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryCollectionPhysicsTypeEnum                 Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldSystemMetaData*                        MetaData                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              Field                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField");
		
		UGeometryCollectionComponent_ApplyPhysicsField_Params params {};
		params.Enabled = Enabled;
		params.Target = Target;
		params.MetaData = MetaData;
		params.Field = Field;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05313570
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LinearVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::ApplyLinearVelocity(int32_t ItemIndex, const struct FVector& LinearVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity");
		
		UGeometryCollectionComponent_ApplyLinearVelocity_Params params {};
		params.ItemIndex = ItemIndex;
		params.LinearVelocity = LinearVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05312860
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::ApplyKinematicField(float Radius, const struct FVector& position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField");
		
		UGeometryCollectionComponent_ApplyKinematicField_Params params {};
		params.Radius = Radius;
		params.position = position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05314780
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PropagationDepth                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PropagationFactor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strain                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::ApplyInternalStrain(int32_t ItemIndex, const struct FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain");
		
		UGeometryCollectionComponent_ApplyInternalStrain_Params params {};
		params.ItemIndex = ItemIndex;
		params.Location = Location;
		params.Radius = Radius;
		params.PropagationDepth = PropagationDepth;
		params.PropagationFactor = PropagationFactor;
		params.Strain = Strain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05314BA0
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PropagationDepth                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PropagationFactor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strain                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::ApplyExternalStrain(int32_t ItemIndex, const struct FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain");
		
		UGeometryCollectionComponent_ApplyExternalStrain_Params params {};
		params.ItemIndex = ItemIndex;
		params.Location = Location;
		params.Radius = Radius;
		params.PropagationDepth = PropagationDepth;
		params.PropagationFactor = PropagationFactor;
		params.Strain = Strain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05313750
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LinearVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::ApplyBreakingLinearVelocity(int32_t ItemIndex, const struct FVector& LinearVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity");
		
		UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Params params {};
		params.ItemIndex = ItemIndex;
		params.LinearVelocity = LinearVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05313750
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     AngularVelocity                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::ApplyBreakingAngularVelocity(int32_t ItemIndex, const struct FVector& AngularVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity");
		
		UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Params params {};
		params.ItemIndex = ItemIndex;
		params.AngularVelocity = AngularVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05313390
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     AngularVelocity                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::ApplyAngularVelocity(int32_t ItemIndex, const struct FVector& AngularVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity");
		
		UGeometryCollectionComponent_ApplyAngularVelocity_Params params {};
		params.ItemIndex = ItemIndex;
		params.AngularVelocity = AngularVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCollectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCollectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGeometryCollectionDebugDrawActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGeometryCollectionDebugDrawActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCollectionDebugDrawComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCollectionDebugDrawComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGeometryCollectionISMPoolActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGeometryCollectionISMPoolActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionISMPoolActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCollectionISMPoolComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCollectionISMPoolComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGeometryCollectionRenderLevelSetActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGeometryCollectionRenderLevelSetActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
		return ptr;
	}

}


