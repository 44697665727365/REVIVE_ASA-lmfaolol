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
	 * BlueprintGeneratedClass Deco_IsWithinDistance.Deco_IsWithinDistance_C
	 * Size -> 0x0039 (FullSize[0x00D9] - InheritedSize[0x00A0])
	 */
	class UDeco_IsWithinDistance_C : public UBTDecorator_BlueprintBase
	{
	public:
		bool                                                       CompareActorInsteadOfVector;                             // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V5YO[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              CompareKey;                                              // 0x00A8(0x0028) Edit, BlueprintVisible
		double                                                     WithinDistance;                                          // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CompareXYDistOnly;                                       // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
