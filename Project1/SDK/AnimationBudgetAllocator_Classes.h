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
	 * Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
		void STATIC_EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
	 * Size -> 0x0028 (FullSize[0x1400] - InheritedSize[0x13D8])
	 */
	class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
	{
	public:
		unsigned char                                              UnknownData_FQOU[0x8];                                   // 0x13D8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_U5WU[0x18];                                  // 0x13E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAutoRegisterWithBudgetAllocator : 1;                    // 0x13F8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoCalculateSignificance : 1;                          // 0x13F8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldUseActorRenderedFlag : 1;                         // 0x13F8(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V9EB[0x7];                                   // 0x13F9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
