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
	 * 		Name   -> PredefinedFunction UFoliageInstancedStaticMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoliageInstancedStaticMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05346B20
	 * 		Name   -> Function Foliage.FoliageType.GetResponseToChannel
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ECollisionChannel                                  Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECollisionResponse UFoliageType::GetResponseToChannel(ECollisionChannel Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Foliage.FoliageType.GetResponseToChannel");
		
		UFoliageType_GetResponseToChannel_Params params {};
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFoliageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoliageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFoliageType_Actor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoliageType_Actor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageType_Actor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFoliageType_InstancedStaticMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoliageType_InstancedStaticMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AEEA0
	 * 		Name   -> Function Foliage.InstancedFoliageActor.BPGetInstancedFoliageActorForCurrentLevel
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AInstancedFoliageActor* AInstancedFoliageActor::STATIC_BPGetInstancedFoliageActorForCurrentLevel(class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Foliage.InstancedFoliageActor.BPGetInstancedFoliageActorForCurrentLevel");
		
		AInstancedFoliageActor_BPGetInstancedFoliageActorForCurrentLevel_Params params {};
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x053476B0
	 * 		Name   -> Function Foliage.InstancedFoliageActor.BPConvertStaticMeshActorsToFoliage
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AStaticMeshActor*>                    Actors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class AStaticMeshActor*>                    ConvertedActors                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AInstancedFoliageActor::BPConvertStaticMeshActorsToFoliage(TArray<class AStaticMeshActor*> Actors, TArray<class AStaticMeshActor*>* ConvertedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Foliage.InstancedFoliageActor.BPConvertStaticMeshActorsToFoliage");
		
		AInstancedFoliageActor_BPConvertStaticMeshActorsToFoliage_Params params {};
		params.Actors = Actors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertedActors != nullptr)
			*ConvertedActors = params.ConvertedActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInstancedFoliageActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInstancedFoliageActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveFoliageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveFoliageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05349C00
	 * 		Name   -> Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStaticMesh*                                 StaticMesh                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CenterPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFoliageStatistics::STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount");
		
		UFoliageStatistics_FoliageOverlappingSphereCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StaticMesh = StaticMesh;
		params.CenterPosition = CenterPosition;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x053496D0
	 * 		Name   -> Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStaticMesh*                                 StaticMesh                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          OutTransforms                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UFoliageStatistics::STATIC_FoliageOverlappingBoxTransforms(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box, TArray<struct FTransform>* OutTransforms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms");
		
		UFoliageStatistics_FoliageOverlappingBoxTransforms_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StaticMesh = StaticMesh;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransforms != nullptr)
			*OutTransforms = params.OutTransforms;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x053499A0
	 * 		Name   -> Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStaticMesh*                                 StaticMesh                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UFoliageStatistics::STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount");
		
		UFoliageStatistics_FoliageOverlappingBoxCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StaticMesh = StaticMesh;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFoliageStatistics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoliageStatistics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrassInstancedStaticMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrassInstancedStaticMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.GrassInstancedStaticMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0534F6F0
	 * 		Name   -> Function Foliage.InteractiveFoliageActor.CapsuleTouched
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OverlapInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AInteractiveFoliageActor::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Foliage.InteractiveFoliageActor.CapsuleTouched");
		
		AInteractiveFoliageActor_CapsuleTouched_Params params {};
		params.OverlappedComp = OverlappedComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.OverlapInfo = OverlapInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInteractiveFoliageActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInteractiveFoliageActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProceduralFoliageBlockingVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProceduralFoliageBlockingVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralFoliageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralFoliageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05350EA0
	 * 		Name   -> Function Foliage.ProceduralFoliageSpawner.Simulate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumSteps                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProceduralFoliageSpawner::Simulate(int32_t NumSteps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Foliage.ProceduralFoliageSpawner.Simulate");
		
		UProceduralFoliageSpawner_Simulate_Params params {};
		params.NumSteps = NumSteps;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralFoliageSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralFoliageSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralFoliageTile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralFoliageTile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProceduralFoliageVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProceduralFoliageVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}

}


