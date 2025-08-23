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
	 * 		Name   -> Function FL_GrabNearDroppedItems.FL_GrabNearDroppedItems_C.Simple Grab Nearby Dropped Items
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             GrabRadius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APrimalCharacter*                            GrabbingCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SearchOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                AnimMontageToPlayWhenPickingUp                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CreatureShouldRestrictIfFollowing                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TagToIgnore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IgnoreEnemyOwned                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxPickup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PickedUpSomething                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             playedanimduration                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalCountOfItemsPickedUp                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    TotalCountOfItemsPickedUpPERITEMTYPE                       (Parm, OutParm)
	 */
	void UFL_GrabNearDroppedItems_C::SimpleGrabNearbyDroppedItems(double GrabRadius, class APrimalCharacter* GrabbingCharacter, const struct FVector& SearchOffset, class UAnimMontage* AnimMontageToPlayWhenPickingUp, bool CreatureShouldRestrictIfFollowing, const class FName& TagToIgnore, bool IgnoreEnemyOwned, int32_t MaxPickup, bool* PickedUpSomething, double* playedanimduration, int32_t* TotalCountOfItemsPickedUp, TArray<int32_t>* TotalCountOfItemsPickedUpPERITEMTYPE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_GrabNearDroppedItems.FL_GrabNearDroppedItems_C.Simple Grab Nearby Dropped Items");
		
		UFL_GrabNearDroppedItems_C_SimpleGrabNearbyDroppedItems_Params params {};
		params.GrabRadius = GrabRadius;
		params.GrabbingCharacter = GrabbingCharacter;
		params.SearchOffset = SearchOffset;
		params.AnimMontageToPlayWhenPickingUp = AnimMontageToPlayWhenPickingUp;
		params.CreatureShouldRestrictIfFollowing = CreatureShouldRestrictIfFollowing;
		params.TagToIgnore = TagToIgnore;
		params.IgnoreEnemyOwned = IgnoreEnemyOwned;
		params.MaxPickup = MaxPickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedUpSomething != nullptr)
			*PickedUpSomething = params.PickedUpSomething;
		if (playedanimduration != nullptr)
			*playedanimduration = params.playedanimduration;
		if (TotalCountOfItemsPickedUp != nullptr)
			*TotalCountOfItemsPickedUp = params.TotalCountOfItemsPickedUp;
		if (TotalCountOfItemsPickedUpPERITEMTYPE != nullptr)
			*TotalCountOfItemsPickedUpPERITEMTYPE = params.TotalCountOfItemsPickedUpPERITEMTYPE;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function FL_GrabNearDroppedItems.FL_GrabNearDroppedItems_C.Debug Failures
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      failreason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_GrabNearDroppedItems_C::DebugFailures(const class FString& failreason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_GrabNearDroppedItems.FL_GrabNearDroppedItems_C.Debug Failures");
		
		UFL_GrabNearDroppedItems_C_DebugFailures_Params params {};
		params.failreason = failreason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function FL_GrabNearDroppedItems.FL_GrabNearDroppedItems_C.Dropped Item Is Acceptable To Pick Up
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADroppedItem*                                TargetItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanBePickedUp                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ArrayIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_GrabNearDroppedItems_C::DroppedItemIsAcceptableToPickUp(class ADroppedItem* TargetItem, bool* CanBePickedUp, int32_t* ArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_GrabNearDroppedItems.FL_GrabNearDroppedItems_C.Dropped Item Is Acceptable To Pick Up");
		
		UFL_GrabNearDroppedItems_C_DroppedItemIsAcceptableToPickUp_Params params {};
		params.TargetItem = TargetItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanBePickedUp != nullptr)
			*CanBePickedUp = params.CanBePickedUp;
		if (ArrayIndex != nullptr)
			*ArrayIndex = params.ArrayIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function FL_GrabNearDroppedItems.FL_GrabNearDroppedItems_C.Can Grab Nearby Dropped Items
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldRestrictIfDead                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldRestrictIfAsleep                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CreatureShouldRestrictIfHasEnemyTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CreatureShouldRestrictIfFollowing                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CreatureShouldRestrictIfWild                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CreatureShouldRestrictIfRidden                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanGrab                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               failurereasonwasdead                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               failurereasonwasasleep                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               failurereasonhadenemy                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               failurereasonwasfollowing                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               failurereasonwaswild                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               failurereasonwasridden                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_GrabNearDroppedItems_C::CanGrabNearbyDroppedItems(class APrimalCharacter* Character, bool ShouldRestrictIfDead, bool ShouldRestrictIfAsleep, bool CreatureShouldRestrictIfHasEnemyTarget, bool CreatureShouldRestrictIfFollowing, bool CreatureShouldRestrictIfWild, bool CreatureShouldRestrictIfRidden, bool* CanGrab, bool* failurereasonwasdead, bool* failurereasonwasasleep, bool* failurereasonhadenemy, bool* failurereasonwasfollowing, bool* failurereasonwaswild, bool* failurereasonwasridden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_GrabNearDroppedItems.FL_GrabNearDroppedItems_C.Can Grab Nearby Dropped Items");
		
		UFL_GrabNearDroppedItems_C_CanGrabNearbyDroppedItems_Params params {};
		params.Character = Character;
		params.ShouldRestrictIfDead = ShouldRestrictIfDead;
		params.ShouldRestrictIfAsleep = ShouldRestrictIfAsleep;
		params.CreatureShouldRestrictIfHasEnemyTarget = CreatureShouldRestrictIfHasEnemyTarget;
		params.CreatureShouldRestrictIfFollowing = CreatureShouldRestrictIfFollowing;
		params.CreatureShouldRestrictIfWild = CreatureShouldRestrictIfWild;
		params.CreatureShouldRestrictIfRidden = CreatureShouldRestrictIfRidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanGrab != nullptr)
			*CanGrab = params.CanGrab;
		if (failurereasonwasdead != nullptr)
			*failurereasonwasdead = params.failurereasonwasdead;
		if (failurereasonwasasleep != nullptr)
			*failurereasonwasasleep = params.failurereasonwasasleep;
		if (failurereasonhadenemy != nullptr)
			*failurereasonhadenemy = params.failurereasonhadenemy;
		if (failurereasonwasfollowing != nullptr)
			*failurereasonwasfollowing = params.failurereasonwasfollowing;
		if (failurereasonwaswild != nullptr)
			*failurereasonwaswild = params.failurereasonwaswild;
		if (failurereasonwasridden != nullptr)
			*failurereasonwasridden = params.failurereasonwasridden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function FL_GrabNearDroppedItems.FL_GrabNearDroppedItems_C.Grab Nearby Dropped Items
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             GrabRadius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APrimalCharacter*                            GrabbingCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SearchOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<double>                                     TrackedValueAssociatedPerItemPickedUpifdesired             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UAnimMontage*                                AnimMontageToPlayWhenPickingUp                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNumberOfItemsAllowedToBePickedUpAtOnce                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        FilterTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IgnoreEnemyOwned                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PickedUpSomething                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             TotalValueOfItemsPickedUp                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             playedanimduration                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalCountOfItemsPickedUp                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    TotalCountOfItemsPickedUpPERITEMTYPE                       (Parm, OutParm)
	 */
	void UFL_GrabNearDroppedItems_C::GrabNearbyDroppedItems(double GrabRadius, class APrimalCharacter* GrabbingCharacter, const struct FVector& SearchOffset, TArray<double>* TrackedValueAssociatedPerItemPickedUpifdesired, class UAnimMontage* AnimMontageToPlayWhenPickingUp, int32_t MaxNumberOfItemsAllowedToBePickedUpAtOnce, const class FName& FilterTag, bool IgnoreEnemyOwned, bool* PickedUpSomething, double* TotalValueOfItemsPickedUp, double* playedanimduration, int32_t* TotalCountOfItemsPickedUp, TArray<int32_t>* TotalCountOfItemsPickedUpPERITEMTYPE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_GrabNearDroppedItems.FL_GrabNearDroppedItems_C.Grab Nearby Dropped Items");
		
		UFL_GrabNearDroppedItems_C_GrabNearbyDroppedItems_Params params {};
		params.GrabRadius = GrabRadius;
		params.GrabbingCharacter = GrabbingCharacter;
		params.SearchOffset = SearchOffset;
		params.AnimMontageToPlayWhenPickingUp = AnimMontageToPlayWhenPickingUp;
		params.MaxNumberOfItemsAllowedToBePickedUpAtOnce = MaxNumberOfItemsAllowedToBePickedUpAtOnce;
		params.FilterTag = FilterTag;
		params.IgnoreEnemyOwned = IgnoreEnemyOwned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrackedValueAssociatedPerItemPickedUpifdesired != nullptr)
			*TrackedValueAssociatedPerItemPickedUpifdesired = params.TrackedValueAssociatedPerItemPickedUpifdesired;
		if (PickedUpSomething != nullptr)
			*PickedUpSomething = params.PickedUpSomething;
		if (TotalValueOfItemsPickedUp != nullptr)
			*TotalValueOfItemsPickedUp = params.TotalValueOfItemsPickedUp;
		if (playedanimduration != nullptr)
			*playedanimduration = params.playedanimduration;
		if (TotalCountOfItemsPickedUp != nullptr)
			*TotalCountOfItemsPickedUp = params.TotalCountOfItemsPickedUp;
		if (TotalCountOfItemsPickedUpPERITEMTYPE != nullptr)
			*TotalCountOfItemsPickedUpPERITEMTYPE = params.TotalCountOfItemsPickedUpPERITEMTYPE;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_GrabNearDroppedItems_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_GrabNearDroppedItems_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FL_GrabNearDroppedItems.FL_GrabNearDroppedItems_C");
		return ptr;
	}

}


