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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass FL_GrabNearDroppedItems.FL_GrabNearDroppedItems_C
	 * Size -> 0x0005 (FullSize[0x0035] - InheritedSize[0x0030])
	 */
	class UFL_GrabNearDroppedItems_C : public UObject_WithWorldContext
	{
	public:
		int32_t                                                    HardLimitofActorsThatCanBeCheckedAtOneTime;              // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Debug;                                                   // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SimpleGrabNearbyDroppedItems(double GrabRadius, class APrimalCharacter* GrabbingCharacter, const struct FVector& SearchOffset, class UAnimMontage* AnimMontageToPlayWhenPickingUp, bool CreatureShouldRestrictIfFollowing, const class FName& TagToIgnore, bool IgnoreEnemyOwned, int32_t MaxPickup, bool* PickedUpSomething, double* playedanimduration, int32_t* TotalCountOfItemsPickedUp, TArray<int32_t>* TotalCountOfItemsPickedUpPERITEMTYPE);
		void DebugFailures(const class FString& failreason);
		void DroppedItemIsAcceptableToPickUp(class ADroppedItem* TargetItem, bool* CanBePickedUp, int32_t* ArrayIndex);
		void CanGrabNearbyDroppedItems(class APrimalCharacter* Character, bool ShouldRestrictIfDead, bool ShouldRestrictIfAsleep, bool CreatureShouldRestrictIfHasEnemyTarget, bool CreatureShouldRestrictIfFollowing, bool CreatureShouldRestrictIfWild, bool CreatureShouldRestrictIfRidden, bool* CanGrab, bool* failurereasonwasdead, bool* failurereasonwasasleep, bool* failurereasonhadenemy, bool* failurereasonwasfollowing, bool* failurereasonwaswild, bool* failurereasonwasridden);
		void GrabNearbyDroppedItems(double GrabRadius, class APrimalCharacter* GrabbingCharacter, const struct FVector& SearchOffset, TArray<double>* TrackedValueAssociatedPerItemPickedUpifdesired, class UAnimMontage* AnimMontageToPlayWhenPickingUp, int32_t MaxNumberOfItemsAllowedToBePickedUpAtOnce, const class FName& FilterTag, bool IgnoreEnemyOwned, bool* PickedUpSomething, double* TotalValueOfItemsPickedUp, double* playedanimduration, int32_t* TotalCountOfItemsPickedUp, TArray<int32_t>* TotalCountOfItemsPickedUpPERITEMTYPE);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
