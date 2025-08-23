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
	 * BlueprintGeneratedClass Deco_IsTargetSubmerged.Deco_IsTargetSubmerged_C
	 * Size -> 0x0028 (FullSize[0x00C8] - InheritedSize[0x00A0])
	 */
	class UDeco_IsTargetSubmerged_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              Target;                                                  // 0x00A0(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
