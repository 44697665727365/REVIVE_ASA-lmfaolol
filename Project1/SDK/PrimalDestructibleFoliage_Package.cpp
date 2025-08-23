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
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.InitializeVariablesFromGameplayData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalDestructibleFoliage_C::InitializeVariablesFromGameplayData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.InitializeVariablesFromGameplayData");
		
		APrimalDestructibleFoliage_C_InitializeVariablesFromGameplayData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakClusterFromRandomClusterIndexArray
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGeometryCollectionComponent*                GeoCollection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    ItemIndexArrayOfCluster                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                DebugTextColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             BreakLevelPercent01                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalDestructibleFoliage_C::BreakClusterFromRandomClusterIndexArray(class UGeometryCollectionComponent* GeoCollection, TArray<int32_t>* ItemIndexArrayOfCluster, const struct FLinearColor& DebugTextColor, double BreakLevelPercent01)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakClusterFromRandomClusterIndexArray");
		
		APrimalDestructibleFoliage_C_BreakClusterFromRandomClusterIndexArray_Params params {};
		params.GeoCollection = GeoCollection;
		params.DebugTextColor = DebugTextColor;
		params.BreakLevelPercent01 = BreakLevelPercent01;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemIndexArrayOfCluster != nullptr)
			*ItemIndexArrayOfCluster = params.ItemIndexArrayOfCluster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakClusterFromClusterIndexArray
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGeometryCollectionComponent*                GeoCollection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    ItemIndexArrayOfCluster                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                DebugTextColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalDestructibleFoliage_C::BreakClusterFromClusterIndexArray(class UGeometryCollectionComponent* GeoCollection, TArray<int32_t>* ItemIndexArrayOfCluster, const struct FLinearColor& DebugTextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakClusterFromClusterIndexArray");
		
		APrimalDestructibleFoliage_C_BreakClusterFromClusterIndexArray_Params params {};
		params.GeoCollection = GeoCollection;
		params.DebugTextColor = DebugTextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemIndexArrayOfCluster != nullptr)
			*ItemIndexArrayOfCluster = params.ItemIndexArrayOfCluster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.Group Cluster Index by Level
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGeometryCollectionComponent*                GeoCollection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberOfPiecesInGeoColl                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugTextColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    Level0                                                     (Parm, OutParm)
	 * 		TArray<int32_t>                                    Level1                                                     (Parm, OutParm)
	 * 		TArray<int32_t>                                    Level2                                                     (Parm, OutParm)
	 */
	void APrimalDestructibleFoliage_C::GroupClusterIndexbyLevel(class UGeometryCollectionComponent* GeoCollection, int32_t NumberOfPiecesInGeoColl, const struct FLinearColor& DebugTextColor, TArray<int32_t>* Level0, TArray<int32_t>* Level1, TArray<int32_t>* Level2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.Group Cluster Index by Level");
		
		APrimalDestructibleFoliage_C_GroupClusterIndexbyLevel_Params params {};
		params.GeoCollection = GeoCollection;
		params.NumberOfPiecesInGeoColl = NumberOfPiecesInGeoColl;
		params.DebugTextColor = DebugTextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Level0 != nullptr)
			*Level0 = params.Level0;
		if (Level1 != nullptr)
			*Level1 = params.Level1;
		if (Level2 != nullptr)
			*Level2 = params.Level2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.GetRangeOfLevelsFromClusterIndexes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGeometryCollectionComponent*                GeoCollection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StartItemIndexOfCluster                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            EndItemIndexOfCluster                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugTextColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    Level0                                                     (Parm, OutParm)
	 * 		TArray<int32_t>                                    Level1                                                     (Parm, OutParm)
	 * 		TArray<int32_t>                                    Level2                                                     (Parm, OutParm)
	 */
	void APrimalDestructibleFoliage_C::GetRangeOfLevelsFromClusterIndexes(class UGeometryCollectionComponent* GeoCollection, int32_t StartItemIndexOfCluster, int32_t EndItemIndexOfCluster, const struct FLinearColor& DebugTextColor, TArray<int32_t>* Level0, TArray<int32_t>* Level1, TArray<int32_t>* Level2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.GetRangeOfLevelsFromClusterIndexes");
		
		APrimalDestructibleFoliage_C_GetRangeOfLevelsFromClusterIndexes_Params params {};
		params.GeoCollection = GeoCollection;
		params.StartItemIndexOfCluster = StartItemIndexOfCluster;
		params.EndItemIndexOfCluster = EndItemIndexOfCluster;
		params.DebugTextColor = DebugTextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Level0 != nullptr)
			*Level0 = params.Level0;
		if (Level1 != nullptr)
			*Level1 = params.Level1;
		if (Level2 != nullptr)
			*Level2 = params.Level2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.GetDamageThresholdInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGeometryCollectionComponent*                GeoCollection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugTextColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DamageThresholdArrayLength                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalDestructibleFoliage_C::GetDamageThresholdInfo(class UGeometryCollectionComponent* GeoCollection, const struct FLinearColor& DebugTextColor, int32_t* DamageThresholdArrayLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.GetDamageThresholdInfo");
		
		APrimalDestructibleFoliage_C_GetDamageThresholdInfo_Params params {};
		params.GeoCollection = GeoCollection;
		params.DebugTextColor = DebugTextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageThresholdArrayLength != nullptr)
			*DamageThresholdArrayLength = params.DamageThresholdArrayLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakAllActiveClusters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGeometryCollectionComponent*                GeoCollection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugTextColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalDestructibleFoliage_C::BreakAllActiveClusters(class UGeometryCollectionComponent* GeoCollection, const struct FLinearColor& DebugTextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakAllActiveClusters");
		
		APrimalDestructibleFoliage_C_BreakAllActiveClusters_Params params {};
		params.GeoCollection = GeoCollection;
		params.DebugTextColor = DebugTextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakClusterFromClusterIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGeometryCollectionComponent*                GeoCollection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndexOfCluster                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugTextColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalDestructibleFoliage_C::BreakClusterFromClusterIndex(class UGeometryCollectionComponent* GeoCollection, int32_t ItemIndexOfCluster, const struct FLinearColor& DebugTextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakClusterFromClusterIndex");
		
		APrimalDestructibleFoliage_C_BreakClusterFromClusterIndex_Params params {};
		params.GeoCollection = GeoCollection;
		params.ItemIndexOfCluster = ItemIndexOfCluster;
		params.DebugTextColor = DebugTextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.GetLevelFromClusterIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGeometryCollectionComponent*                GeoCollection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndexOfCluster                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugTextColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Level                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalDestructibleFoliage_C::GetLevelFromClusterIndex(class UGeometryCollectionComponent* GeoCollection, int32_t ItemIndexOfCluster, const struct FLinearColor& DebugTextColor, int32_t* Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.GetLevelFromClusterIndex");
		
		APrimalDestructibleFoliage_C_GetLevelFromClusterIndex_Params params {};
		params.GeoCollection = GeoCollection;
		params.ItemIndexOfCluster = ItemIndexOfCluster;
		params.DebugTextColor = DebugTextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Level != nullptr)
			*Level = params.Level;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.Break
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APrimalDestructibleFoliage_C::Break()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.Break");
		
		APrimalDestructibleFoliage_C_Break_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakSecondLayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APrimalDestructibleFoliage_C::BreakSecondLayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakSecondLayer");
		
		APrimalDestructibleFoliage_C_BreakSecondLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BPStartDestruction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UGeometryCollection*                         destructionAsset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitDirection                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalHealth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalDestructibleFoliage_C::BPStartDestruction(class UGeometryCollection* destructionAsset, const struct FVector& HitDirection, float Damage, float TotalHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BPStartDestruction");
		
		APrimalDestructibleFoliage_C_BPStartDestruction_Params params {};
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
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APrimalDestructibleFoliage_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.ReceiveBeginPlay");
		
		APrimalDestructibleFoliage_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.OnBreak
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FChaosBreakEvent                            BreakEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void APrimalDestructibleFoliage_C::OnBreak(const struct FChaosBreakEvent& BreakEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.OnBreak");
		
		APrimalDestructibleFoliage_C_OnBreak_Params params {};
		params.BreakEvent = BreakEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.StaticBPPreDestructionHandleAttachedComponentClass
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      AttachedComponentClass                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UInstancedStaticMeshComponent*               ForMeshComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InstancePosition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InstanceRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InstanceIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalHealth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalDestructibleFoliage_C::StaticBPPreDestructionHandleAttachedComponentClass(class UClass* AttachedComponentClass, class UInstancedStaticMeshComponent* ForMeshComp, const struct FVector& InstancePosition, const struct FRotator& InstanceRotation, int32_t InstanceIndex, const struct FVector& HitDirection, float Damage, float TotalHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.StaticBPPreDestructionHandleAttachedComponentClass");
		
		APrimalDestructibleFoliage_C_StaticBPPreDestructionHandleAttachedComponentClass_Params params {};
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
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.ExecuteUbergraph_PrimalDestructibleFoliage
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalDestructibleFoliage_C::ExecuteUbergraph_PrimalDestructibleFoliage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.ExecuteUbergraph_PrimalDestructibleFoliage");
		
		APrimalDestructibleFoliage_C_ExecuteUbergraph_PrimalDestructibleFoliage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrimalDestructibleFoliage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrimalDestructibleFoliage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalDestructibleFoliage.PrimalDestructibleFoliage_C");
		return ptr;
	}

}


