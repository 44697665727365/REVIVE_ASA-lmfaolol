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
	 * BlueprintGeneratedClass IsWithinDistanceFromGround_DK.IsWithinDistanceFromGround_DK_C
	 * Size -> 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
	 */
	class UIsWithinDistanceFromGround_DK_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     WithinZDist;                                             // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_IsWithinDistanceFromGround_DK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
