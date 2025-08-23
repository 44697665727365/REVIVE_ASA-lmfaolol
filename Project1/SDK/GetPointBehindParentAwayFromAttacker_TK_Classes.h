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
	 * BlueprintGeneratedClass GetPointBehindParentAwayFromAttacker_TK.GetPointBehindParentAwayFromAttacker_TK_C
	 * Size -> 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
	 */
	class UGetPointBehindParentAwayFromAttacker_TK_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     FixedDistance;                                           // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RandomDistance;                                          // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              NavigationTargetKey;                                     // 0x00C0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              NavigationTargetActor;                                   // 0x00E8(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
