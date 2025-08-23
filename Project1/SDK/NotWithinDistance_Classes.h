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
	 * BlueprintGeneratedClass NotWithinDistance.NotWithinDistance_C
	 * Size -> 0x00B0 (FullSize[0x0150] - InheritedSize[0x00A0])
	 */
	class UNotWithinDistance_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              Range;                                                   // 0x00A8(0x0028) Edit, BlueprintVisible
		double                                                     RangeOffsetValue;                                        // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              ShouldFlyKey;                                            // 0x00D8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetBlackboardKey;                                     // 0x0100(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              FollowStoppingDistanceKey;                               // 0x0128(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_NotWithinDistance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
